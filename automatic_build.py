import sys
import os
import json

custom_targets_file = open("custom_targets.json", "r")
custom_targets_info = json.load(custom_targets_file)
custom_targets_file.close()

requested_toolchain = "GCC_ARM"
BuildFailed = []
BuildOK = []

for EachTarget in custom_targets_info:
    cmdline = "mbed compile -m %s -t %s" % (EachTarget, requested_toolchain)
    print ("\n***************************************")
    print ("Executing: " + cmdline)
    sys.stdout.flush()

    if os.system(cmdline) != 0:
        BuildFailed.append(cmdline)
    else:
        BuildOK.append(cmdline)

if BuildOK != []:
    print()
    print("Succeeded build command:")
    for EachBuild in BuildOK:
        print(EachBuild)
    print()

if BuildFailed != []:
    print()
    print("Failed build command:")
    for EachBuild in BuildFailed:
        print(EachBuild)
    print()
    sys.exit(1)
