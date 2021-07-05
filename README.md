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


## Charles's LoRa-E5 breakout board

https://github.com/hallard/LoRa-E5-Breakout

Use LoRa E5 module and added 

- FTDI 6 pins connector (use 3.3V FTDI One, not 5V)
- Exposed JTAG pins needed to flash module (PA13-SWDIO / PA14-SWCLK / RESET)
- Green Led on PB10 (LED1) reversed (1=OFF, 0=ON)
- Red Led on PB5 (LED2) reversed (1=OFF, 0=ON)

##  RAK3172

MCU: STM32WLE5CC

https://docs.rakwireless.com/Product-Categories/WisDuo/RAK3172-Module/Datasheet/#description

