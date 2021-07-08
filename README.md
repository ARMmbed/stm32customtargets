CUSTOM boards with STM32

Feel free to propose your custom boards support in mbed-os!

Table of Contents
=================

* [Usage](#usage)
* [STM32F1](#stm32f1)
   * [BLUEPILL](#bluepill)
* [STM32WL](#stm32wl)
   * [LORA_E5](#lora_e5)
   * [LoRa-E5 breakout board](#lora-e5-breakout-board)
   * [RAK3172](#rak3172)


# Usage

In your application, clone this repo.

````
git clone https://github.com/ARMmbed/stm32customtargets.git
````

Copy custom_targets.json

````
cp stm32customtargets/custom_targets.json .
````

Then build your target!

````
mbed compile -m XXX -t XXX
````



# STM32F1

## BLUEPILL

MCU: STM32F103C8T6

source: https://os.mbed.com/users/hudakz/code/mbed-os-bluepill/

 (https://os.mbed.com/users/hudakz/code/STM32F103C8T6_Hello/)


# STM32WL

## LORA_E5

MCU: STM32WLE5JC

https://www.seeedstudio.com/LoRa-E5-Wireless-Module-p-4745.html


## LoRa-E5 breakout board

https://github.com/hallard/LoRa-E5-Breakout

Derived from LORA_E5


##  RAK3172

MCU: STM32WLE5CC

https://docs.rakwireless.com/Product-Categories/WisDuo/RAK3172-Module/Datasheet/#description

