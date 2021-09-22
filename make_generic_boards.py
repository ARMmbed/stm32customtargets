#!/usr/bin/env python

"""
Copyright (c) 2021 STMicroelectronics. All rights reserved.

SPDX-License-Identifier: Apache-2.0

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
"""

from argparse import ArgumentParser
import sys
import os
import json
import subprocess
import re
from distutils.dir_util import copy_tree

#STEP1: call STM32_gen_PeripheralPins.py script to create all MCU peripheral pins files
#STEP2: copy to stm32customtargets STM32 family
#STEP3: update custom_targets.json
#STEP4: create system_clock.c
#STEP5: update TARGET_STM32xx/TARGET_GENERIC_STM32xxxxxx/CMakeLists.txt
#STEP6: update TARGET_STM32xx/CMakeLists.txt

print("")
Arguments = ArgumentParser(description="")
Arguments.add_argument("--filter", "-f", help="")
args = Arguments.parse_args()

if args.filter:
    requested_device = args.filter.upper()
else:
    print("please use -f option")
    exit(3)

#STEP1: call STM32_gen_PeripheralPins.py script to create all MCU peripheral pins files
MBED_SCRIPT = os.path.join("mbed-os", "targets", "TARGET_STM", "tools", "STM32_gen_PeripheralPins.py")
subprocess.check_output(["python", MBED_SCRIPT, "-m", requested_device, "-f"])

target_list = []
missing_target = []
subfamily_list_ok = []
missing_subfamily_list = []
missing_device_list = []

dual_core_list = ["H745", "H755", "H747", "H757"]

custom_targets_file = open("custom_targets.json", "r")
custom_targets_info = json.load(custom_targets_file)
custom_targets_file.close()

targets_json_file = open(os.path.join("mbed-os", "targets", "targets.json"), "r")
targets_json_info = json.load(targets_json_file)
targets_json_file.close()

for root, dirs, files in os.walk("TARGET_CUSTOM", topdown=False):
    for name in dirs:
        # print("%s" %name)
        is_dual_core = False
        if requested_device in name:
            MCU_pattern = re.compile("TARGET_STM32([\w]{2})([\w]{2})([\w])([\w])")
            for match in re.finditer(MCU_pattern, name):
                STM32_FAMILY = match.group(1)
                STM32_SUBFAMILY = match.group(2)
                STM32_PACKAGE = match.group(3)
                STM32_FLASH = match.group(4)
                # print("match family %s sub %s" %(STM32_FAMILY, STM32_SUBFAMILY))

                if name.endswith("_Q"):
                    STM32_FLASH += "Q"

                if name.endswith("_N"):
                    print("%s => skipped" % name)
                    continue

                if "%s%s" %(STM32_FAMILY.upper(), STM32_SUBFAMILY) in dual_core_list:
                    is_dual_core = True

                TARGET_NAME =  "GENERIC_STM32%s%s%s%s" %(STM32_FAMILY, STM32_SUBFAMILY, STM32_PACKAGE, STM32_FLASH)
                if (is_dual_core == False and TARGET_NAME not in target_list) or\
                        (is_dual_core and "%s_CM4" % TARGET_NAME not in target_list):
                    INHERIT_NAME = "MCU_STM32%s%sx%s" % (STM32_FAMILY, STM32_SUBFAMILY, STM32_FLASH)
                    if INHERIT_NAME not in targets_json_info:
                        if INHERIT_NAME not in missing_subfamily_list:
                            print("%s => %s => skipped as %s not in targets.json" % (name, TARGET_NAME, INHERIT_NAME))
                            missing_subfamily_list.append(INHERIT_NAME)
                            if TARGET_NAME not in missing_target:
                                missing_target.append(TARGET_NAME)
                        else:
                            print("%s => skipped" % name)
                            pass
                        continue # need mbed-os update before
                    if INHERIT_NAME not in subfamily_list_ok:
                        subfamily_list_ok.append(INHERIT_NAME)

# STEP2: copy to stm32customtargets STM32 family
                    copy_tree(os.path.join(root, name), os.path.join("TARGET_STM32%s" % STM32_FAMILY, "TARGET_%s" % TARGET_NAME))
                    if is_dual_core:
                        target_list.append("%s_CM4" % TARGET_NAME)
                        target_list.append("%s_CM7" % TARGET_NAME)
                    else:
                        target_list.append(TARGET_NAME)

# STEP4: create system_clock.c
                    clock_file = open(os.path.join("TARGET_STM32%s" % STM32_FAMILY, "TARGET_%s" % TARGET_NAME, "system_clock.c"), 'w')
                    clock_code = ("""#include "mbed_error.h"

MBED_WEAK void SetSysClock(void)
{
}
""")
                    clock_file.write(clock_code)
                    clock_file.close()

# STEP5: update TARGET_STM32xx/TARGET_GENERIC_STM32xxxxxx/CMakeLists.txt
                    cmake_list_file = os.path.join("TARGET_STM32%s" % STM32_FAMILY, "TARGET_%s" % TARGET_NAME, "CMakeLists.txt")
                    with open(cmake_list_file, "r") as sources:
                        lines = sources.readlines()
                    if is_dual_core:
                        with open(cmake_list_file, "w") as sources:
                            for line in lines:
                                if "target_link_libraries" in line:
                                    line = line.replace(")", "-cm4)")
                                sources.write(line.replace("xxx", "%s-cm4" % TARGET_NAME.replace("_", "-").lower()))
                                if "PeripheralPins" in line:
                                    sources.write("        system_clock.c\n")
                            for line in lines[2:]:
                                if "target_link_libraries" in line:
                                    line = line.replace(")", "-cm7)")
                                sources.write(line.replace("xxx", "%s-cm7" % TARGET_NAME.replace("_", "-").lower()))
                                if "PeripheralPins" in line:
                                    sources.write("        system_clock.c\n")
                    else:
                        with open(cmake_list_file, "w") as sources:
                            for line in lines:
                                if "target_link_libraries" in line:
                                    if name.endswith("_Q"):
                                        line = line.replace(")", "q)")
                                sources.write(line.replace("xxx", TARGET_NAME.replace("_", "-").lower()))
                                if "PeripheralPins" in line:
                                    sources.write("        system_clock.c\n")


# STEP6: update TARGET_STM32xx/CMakeLists.txt
                    cmake_list_file = os.path.join("TARGET_STM32%s" % STM32_FAMILY, "CMakeLists.txt")
                    with open(cmake_list_file, "r") as sources:
                        lines = sources.readlines()
                    found_target = False
                    for line in lines:
                        if TARGET_NAME in line:
                            found_target = True
                    if found_target == False:
                        lines.append("add_subdirectory(TARGET_%s EXCLUDE_FROM_ALL)\n" % TARGET_NAME)
                    with open(cmake_list_file, "w") as sources:
                        sources.write(lines[0])
                        sources.write(lines[1])
                        sources.write(lines[2])
                        for line in sorted(lines[3:]):
                            sources.write(line)

# STEP3A: look for the best device_name
                    MBED_PACK_MANAGER = os.path.join("mbed-os", "tools", "arm_pack_manager", "index.json")
                    pack_manager_file = open(MBED_PACK_MANAGER, "r")
                    pack_manager_info = json.load(pack_manager_file)
                    pack_manager_file.close()

                    device_name = ""
                    device_to_find = "STM32%s%s%s%s" % (STM32_FAMILY, STM32_SUBFAMILY, STM32_PACKAGE, STM32_FLASH[0])
                    for EachDevice in pack_manager_info:
                        if device_to_find in EachDevice:
                            device_name = EachDevice

                    # 2nd chance without package information
                    if device_name == "":
                        device_to_find = "STM32%s%sx%s" % (STM32_FAMILY, STM32_SUBFAMILY, STM32_FLASH[0])
                        CMSIS_pattern = re.compile("STM32([\w]{4})[\w]([\w])")
                        # print("device_to_find %s" % device_to_find)
                        for EachDevice in pack_manager_info:
                            for match in re.finditer(CMSIS_pattern, EachDevice):
                                device_to_compare = "STM32%sx%s" % (match.group(1), match.group(2))
                                if device_to_find == device_to_compare:
                                    device_name = EachDevice

# STEP3B: update custom_targets.json
                    json_info = {}
                    inherit_list = []
                    if is_dual_core:
                        label_list = []
                        label_list.append(TARGET_NAME)

                        inherit_list.append("%s_CM4" % INHERIT_NAME)
                        json_info['inherits'] = inherit_list
                        json_info['extra_labels_add'] = label_list
                        if device_name != "":
                            json_info['device_name'] = device_name
                        else:
                            missing_device_list.append(TARGET_NAME)
                        custom_targets_info["%s_CM4" % TARGET_NAME] = json_info

                        json_info = {}
                        inherit_list = []
                        inherit_list.append("%s_CM7" % INHERIT_NAME)
                        json_info['inherits'] = inherit_list
                        json_info['extra_labels_add'] = label_list
                        if device_name != "":
                            json_info['device_name'] = device_name
                        else:
                            missing_device_list.append(TARGET_NAME)
                        custom_targets_info["%s_CM7" % TARGET_NAME] = json_info
                    else:
                        inherit_list.append(INHERIT_NAME)
                        json_info['inherits'] = inherit_list
                        if device_name != "":
                            json_info['device_name'] = device_name
                        else:
                            missing_device_list.append(TARGET_NAME)
                        custom_targets_info[TARGET_NAME] = json_info

                    print ("%s => %s inherits from %s with device_name %s" % (name, TARGET_NAME, INHERIT_NAME, device_name))

                else:
                    print ("%s => skipped" % name)
                    pass


#STEP3: update custom_targets.json
with open('custom_targets.json', 'w') as f:
    json.dump(custom_targets_info, f, sort_keys = True, indent = 4)

# create local file to call with aci_build.py after
with open('target_list.json', 'w') as f:
    json.dump(target_list, f, sort_keys = True, indent = 4)
with open('target_list_%s.json' % STM32_FAMILY.lower(), 'w') as f:
    json.dump(target_list, f, sort_keys = True, indent = 4)


print ("")
# print(target_list)
# print(missing_target)
print("%d targets available thanks to:" % len(target_list))
for Sub in subfamily_list_ok:
    print("- %s" % Sub)

if len(missing_subfamily_list):
    print()
    print ("%d missing targets due to missing: " % len(missing_target))
    for Sub in missing_subfamily_list:
        print ("- %s" % Sub)

if len(missing_device_list):
    print()
    print ("Missing device_name in mbed-os pack manager: ")
    for Sub in missing_device_list:
        print ("- %s" % Sub)

print()
print ("Next command to build: python aci_build.py -l [-b] [-c] [-e]")
