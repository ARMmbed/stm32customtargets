# CUSTOM boards with STM32

Feel free to propose your custom boards support in mbed-os!

Table of Contents
=================

* [Usage](#usage)
* [STM32F1](#stm32f1)
   * [BLUEPILL](#bluepill)
* [STM32WL](#stm32wl)
   * [SeeedStudio LoRa E5](#seeed-studio-lora-e5)
   * [SeeedStudio LoRa E5 Mini](#seeed-studio-lora-e5-mini)
   * [SeeedStudio LoRa E5 Dev Board](#seeed-studio-lora-e5-dev-board)
   * [Charles's LoRa-E5 breakout board](#charless-lora-e5-breakout-board)
   * [RAK Wrirelesss RAK3172](#rak-wireless-rak3172)
   * [Charles's RAK3172 breakout board](#charless-rak3172-breakout-board)
* [STM32L4](#stm32l4)
   * [STWIN](#stwin)
* [License and contributions](#license-and-contributions)


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

LoRa-E5 use only RFO_HP for TX power, so for all boards using this module you need to add this to your `mbed_app.json` on section `target_overrides`

```json

   "LORA_E5": {
      "stm32wl-lora-driver.rf_switch_config": 2
   }
```

## Seeed Studio LoRa E5 Mini

Use LoRa E5 modulen basic board with USB/Serial and headers

https://www.seeedstudio.com/LoRa-E5-mini-STM32WLE5JC-p-4869.html


## Seeed Studio LoRa E5 Dev Board

Use LoRa E5 module 

https://www.seeedstudio.com/LoRa-E5-Dev-Kit-p-4868.html

- RS485 Modbus
- all LoRa-E5 pins exposed
- temperature sensor
- buttons
- Led 
- GPIO to enable 3.3V and 5V for sensors
- some grove sonnectors (I2C, Serial, ..)
- Arduino form factor to plug shield


## Charles's LoRa-E5 breakout board

<img src="https://github.com/hallard/LoRa-E5-Breakout/blob/main/pictures/LoRa-E5-Breakout-top.png">

https://github.com/hallard/LoRa-E5-Breakout

Use LoRa E5 module and added

- FTDI 6 pins connector (use 3.3V FTDI One, not 5V)
- Exposed JTAG pins needed to flash module (PA13-SWDIO / PA14-SWCLK / RESET)
- Green Led on PB10 (LED1) reversed (1=OFF, 0=ON)
- Red Led on PB5 (LED2) reversed (1=OFF, 0=ON)

for debug LEDs of breakout so you need to add this to your `mbed_app.json` on section `target_overrides` and don't forget also the `rf_switch_config` seen above


```json
   "LORA_E5_BREAKOUT": {
      "stm32wl-lora-driver.rf_switch_config": 2,
      "stm32wl-lora-driver.debug_tx": "PB_5",
      "stm32wl-lora-driver.debug_rx": "PB_10",
      "stm32wl-lora-driver.debug_invert": 1
   }
```


## RAK Wireless RAK3172

MCU: STM32WLE5CC

https://docs.rakwireless.com/Product-Categories/WisDuo/RAK3172-Module/Datasheet/#description

RAK3172 use only RFO_HP for TX power and no TXCO so for all boards using this module you need to add this to your `mbed_app.json` on section `target_overrides`

```json

   "RAK3172": {
      "stm32wl-lora-driver.rf_switch_config": 2,
      "stm32wl-lora-driver.crystal_select" : 0
   }
```

## Charles's RAK3172 breakout board

<img src="https://github.com/hallard/RAK3172-Breakout/blob/main/pictures/RAK3172-Breakout-top.png">

https://github.com/hallard/RAK3172-Breakout

Use RAK3172 and added

- FTDI 6 pins connector (use 3.3V FTDI One, not 5V)
- Exposed JTAG pins needed to flash module (PA13-SWDIO / PA14-SWCLK / RESET)
- Green Led on PA10 (LED1) reversed (1=OFF, 0=ON)
- Red Led on PA9 (LED2) reversed (1=OFF, 0=ON)
- SMD CR2450 battery holder

For debug LEDs of breakout so you need to add this to your `mbed_app.json` on section `target_overrides` and don't forget also the `rf_switch_config` and `crystal_select` seen above

```json
   "RAK3172_BREAKOUT": {
      "stm32wl-lora-driver.rf_switch_config": 2,
      "stm32wl-lora-driver.crystal_select" : 0,
      "stm32wl-lora-driver.debug_tx": "PA_10",
      "stm32wl-lora-driver.debug_rx": "PA_9",
      "stm32wl-lora-driver.debug_invert": 1
   }
```


# License and contributions

The software is provided under the [Apache-2.0 license](LICENSE-apache-2.0.txt).
Contributions to this project are accepted under the same license.
