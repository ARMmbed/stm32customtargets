# CUSTOM boards with STM32

Feel free to propose your custom boards support in mbed-os!

Table of Contents
=================

* [Usage](#usage)
* [STM32F1](#stm32f1)
   * [BLUEPILL](#bluepill)
* [STM32L4](#stm32l4)
   * [STWIN](#stwin)
* [STM32WL](#stm32wl)
   * [Seeed Studio LoRa E5](#seeed-studio-lora-e5)
   * [Charles's LoRa-E5 breakout board](#charless-lora-e5-breakout-board)
   * [RAK Wireless RAK3172](#rak-wireless-rak3172)
   * [Charles's RAK3172 breakout board](#charless-rak3172-breakout-board)
* [License and contributions](#license-and-contributions)
   * [Automatic pull request checks](#automatic-pull-request-checks)
   * [Automatic weekly non regression](#automatic-weekly-non-regression)


# Usage

In your application, clone this repo.

````
git clone https://github.com/ARMmbed/stm32customtargets.git
````

Copy custom_targets.json

````
cp stm32customtargets/custom_targets.json .
````

Then build your target with

- CLI1:
````
mbed compile -m XXX -t XXX
````

- CLI2:

Add in the application CMakeLists.txt:
````
add_subdirectory(stm32customtargets)
````
And build:
````
mbedtools compile -m XXX -t XXX
````


# STM32F1

## BLUEPILL

MCU: STM32F103C8T6

source: https://os.mbed.com/users/hudakz/code/mbed-os-bluepill/

 (https://os.mbed.com/users/hudakz/code/STM32F103C8T6_Hello/)


# STM32L4

## STWIN

MCU: STM32L4R9ZI

https://www.st.com/en/evaluation-tools/steval-stwinkt1.html


# STM32WL

## Seeed Studio LoRa E5

MCU: STM32WLE5JC

https://www.seeedstudio.com/LoRa-E5-Wireless-Module-p-4745.html

## Charles's LoRa-E5 breakout board

<img src="https://github.com/hallard/LoRa-E5-Breakout/blob/main/pictures/LoRa-E5-Breakout-top.png">

https://github.com/hallard/LoRa-E5-Breakout

Use LoRa E5 module and added

- FTDI 6 pins connector (use 3.3V FTDI One, not 5V)
- Exposed JTAG pins needed to flash module (PA13-SWDIO / PA14-SWCLK / RESET)
- Green Led on PB10 (LED1) reversed (1=OFF, 0=ON)
- Red Led on PB5 (LED2) reversed (1=OFF, 0=ON)

## RAK Wireless RAK3172

MCU: STM32WLE5CC

https://docs.rakwireless.com/Product-Categories/WisDuo/RAK3172-Module/Datasheet/#description

## Charles's RAK3172 breakout board

TBD

Use RAK3172 and added

- FTDI 6 pins connector (use 3.3V FTDI One, not 5V)
- Exposed JTAG pins needed to flash module (PA13-SWDIO / PA14-SWCLK / RESET)
- Red Led on PA9 (LED1) reversed (1=OFF, 0=ON)
- Green Led on PA10 (LED2) reversed (1=OFF, 0=ON)
- SMD CR2450 battery holder


# License and contributions

The software is provided under the [Apache-2.0 license](LICENSE-apache-2.0.txt).
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

- Standard Pin Names check should be OK

https://os.mbed.com/docs/mbed-os/latest/apis/standard-pin-names.html

```
python aci_build.py --pin
```

## Automatic weekly non regression

A full non regression is executed each week-end

See in https://github.com/ARMmbed/stm32customtargets/actions
