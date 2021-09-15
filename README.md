# CUSTOM boards with STM32

Feel free to propose your custom boards support in mbed-os!


Table of Contents
=================

* [WOW](#WOW)
* [STM32G0](#STM32G0)
* [License](#license)
* [Contributions](#contributions)
   * [Automatic pull request checks](#automatic-pull-request-checks)
   * [Manual pull request checks](#manual-pull-request-checks)
   * [Automatic weekly non regression](#automatic-weekly-non-regression)


# WOW

Clone mbed-os:
```
git clone https://github.com/ARMmbed/mbed-os.git
```

A "generic" target is a mbed-os target with a pure STM32 MCU.

Goal is to make real custom boards creation very easy
as we ensure that build has alrady been tested.

```
python -u make_generic_boards.py -f STM32G0
```

make_generic_boards.py is:
- using mbed-os/targets/TARGET_STM/tools/STM32_gen_PeripheralPins.py to create all needed files for all supported MCU
- copying files into this stm32customtargets repo
- updating few files to make build environment OK with CLI1 and CLI2

Start build tests:
```
python aci_build.py -l
python aci_build.py -l -b
python aci_build.py -l -c
python aci_build.py -l -c -b
```


# STM32G0

- mbed-os: mbed-os-6.15.0
- STM32_open_pin_data: STM32CubeMX-DB.6.0.30

35 targets available thanks to:
- MCU_STM32G030x8
- MCU_STM32G031x8
- MCU_STM32G041x8
- MCU_STM32G070xB
- MCU_STM32G071xB
- MCU_STM32G081xB
- MCU_STM32G0B0xE
- MCU_STM32G0B1xE

16 missing targets due to missing:
- MCU_STM32G030x6
- MCU_STM32G031x4
- MCU_STM32G031x6
- MCU_STM32G041x6
- MCU_STM32G050x6
- MCU_STM32G050x8
- MCU_STM32G051x6
- MCU_STM32G051x8
- MCU_STM32G061x6
- MCU_STM32G061x8
- MCU_STM32G071x6
- MCU_STM32G071x8
- MCU_STM32G0B1xB
- MCU_STM32G0B1xC
- MCU_STM32G0C1xC
- MCU_STM32G0C1xE



# License

The software is provided under the [Apache-2.0 license](LICENSE-apache-2.0.txt).


# Contributions

Contributions to this project are accepted under the same license.

## Automatic pull request checks

- Build with CLI1 should be OK
```
python aci_build.py
```

- Build with CLI2 should be OK
```
python aci_build.py --cli2
```

Note that build is using the mbed_app_template.json file as configuration file.

- Standard Pin Names check should be OK

https://os.mbed.com/docs/mbed-os/latest/apis/standard-pin-names.html

```
python aci_build.py --pin
```


## Manual pull request checks

- Each target in custom_targets.json should be described in the README.md file

```
## <Full target name>

MCU: <STM32 MCU>

TARGET: <Target name for build>

<Link to a webpage describing this board>

<all other info is optional>

```

- Keep Table of Contents up to date


## Automatic weekly non regression

A full non regression is executed each week-end

```
python aci_build.py --all
python aci_build.py --all --baremetal
python aci_build.py --all --cli2
python aci_build.py --all --cli2 --baremetal
python aci_build.py --all --pin
```

See in https://github.com/ARMmbed/stm32customtargets/actions
