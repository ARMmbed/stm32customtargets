# CUSTOM boards with STM32

Feel free to propose your custom boards support in mbed-os!


Table of Contents
=================

* [WOW](#WOW)
* [STM32G0](#STM32G0)
* [STM32G4](#STM32G4)
* [STM32U5](#STM32U5)
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


# STM32G4

- mbed-os: mbed-os-6.15.0
- STM32_open_pin_data: STM32CubeMX-DB.6.0.30

49 targets available thanks to:
- MCU_STM32G431xB
- MCU_STM32G441xB
- MCU_STM32G471xE
- MCU_STM32G473xE
- MCU_STM32G474xE
- MCU_STM32G483xE
- MCU_STM32G484xE
- MCU_STM32G491xE
- MCU_STM32G4A1xE

8 missing targets due to missing:
- MCU_STM32G431x6
- MCU_STM32G431x8
- MCU_STM32G471xC
- MCU_STM32G473xB
- MCU_STM32G473xC
- MCU_STM32G474xB
- MCU_STM32G474xC
- MCU_STM32G491xC

Missing device_name in mbed-os pack manager:
- GENERIC_STM32G491CE
- GENERIC_STM32G491KE
- GENERIC_STM32G491ME
- GENERIC_STM32G491RE
- GENERIC_STM32G491VE
- GENERIC_STM32G4A1CE
- GENERIC_STM32G4A1KE
- GENERIC_STM32G4A1ME
- GENERIC_STM32G4A1RE
- GENERIC_STM32G4A1VE


# STM32U5

- mbed-os: mbed-os-6.15.0
- STM32_open_pin_data: STM32CubeMX-DB.6.0.30

14 targets available thanks to:
- MCU_STM32U575xI
- MCU_STM32U585xI

2 missing targets due to missing:
- MCU_STM32U575xG
- MCU_STM32U585xE


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
