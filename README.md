# README for STM32 custom targets

Table of Contents
=================


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


# Customer boards

## LORA_E5

MCU: STM32WLE5JC

https://www.seeedstudio.com/LoRa-E5-Wireless-Module-p-4745.html


## LoRa-E5 breakout board

https://github.com/hallard/LoRa-E5-Breakout

Derived from LORA_E5


##  RAK3172

MCU: STM32WLE5CC

https://docs.rakwireless.com/Product-Categories/WisDuo/RAK3172-Module/Datasheet/#description

