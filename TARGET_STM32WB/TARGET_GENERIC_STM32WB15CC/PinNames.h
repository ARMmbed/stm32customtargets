/* mbed Microcontroller Library
 * SPDX-License-Identifier: BSD-3-Clause
 ******************************************************************************
 *
 * Copyright (c) 2016-2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 *
 * Automatically generated from STM32CubeMX/db/mcu/STM32WB15CCUxE.xml
 */

/* MBED TARGET LIST: xxx */

#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"
#include "PinNamesTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    PA_0       = 0x00,
    PA_1       = 0x01,
    PA_2       = 0x02,
    PA_3       = 0x03,
    PA_4       = 0x04,
    PA_5       = 0x05,
    PA_6       = 0x06,
    PA_7       = 0x07,
    PA_8       = 0x08,
    PA_9       = 0x09,
    PA_10      = 0x0A,
    PA_11      = 0x0B,
    PA_12      = 0x0C,
    PA_13      = 0x0D,
    PA_14      = 0x0E,
    PA_15      = 0x0F,
    PB_0       = 0x10,
    PB_1       = 0x11,
    PB_2       = 0x12,
    PB_3       = 0x13,
    PB_4       = 0x14,
    PB_5       = 0x15,
    PB_6       = 0x16,
    PB_7       = 0x17,
    PB_8       = 0x18,
    PB_9       = 0x19,
    PB_10      = 0x1A,
    PB_12      = 0x1C,
    PB_13      = 0x1D,
    PB_14      = 0x1E,
    PB_15      = 0x1F,
    PC_1       = 0x21,
    PC_14      = 0x2E,
    PC_15      = 0x2F,
    PE_4       = 0x44,
    PH_3       = 0x73,

    /**** ADC internal channels ****/

    ADC_TEMP = 0xF0, // Internal pin virtual value
    ADC_VREF = 0xF1, // Internal pin virtual value
    ADC_VBAT = 0xF2, // Internal pin virtual value

#ifdef TARGET_FF_ARDUINO_UNO
    // Arduino Uno (Rev3) pins
    ARDUINO_UNO_A0  = Px_x,
    ARDUINO_UNO_A1  = Px_x,
    ARDUINO_UNO_A2  = Px_x,
    ARDUINO_UNO_A3  = Px_x,
    ARDUINO_UNO_A4  = Px_x,
    ARDUINO_UNO_A5  = Px_x,

    ARDUINO_UNO_D0  = Px_x,
    ARDUINO_UNO_D1  = Px_x,
    ARDUINO_UNO_D2  = Px_x,
    ARDUINO_UNO_D3  = Px_x,
    ARDUINO_UNO_D4  = Px_x,
    ARDUINO_UNO_D5  = Px_x,
    ARDUINO_UNO_D6  = Px_x,
    ARDUINO_UNO_D7  = Px_x,
    ARDUINO_UNO_D8  = Px_x,
    ARDUINO_UNO_D9  = Px_x,
    ARDUINO_UNO_D10 = Px_x,
    ARDUINO_UNO_D11 = Px_x,
    ARDUINO_UNO_D12 = Px_x,
    ARDUINO_UNO_D13 = Px_x,
    ARDUINO_UNO_D14 = Px_x,
    ARDUINO_UNO_D15 = Px_x,
#endif

    // STDIO for console print
#ifdef MBED_CONF_TARGET_STDIO_UART_TX
    CONSOLE_TX = MBED_CONF_TARGET_STDIO_UART_TX,
#else
    CONSOLE_TX = Px_x,
#endif
#ifdef MBED_CONF_TARGET_STDIO_UART_RX
    CONSOLE_RX = MBED_CONF_TARGET_STDIO_UART_RX,
#else
    CONSOLE_RX = Px_x,
#endif

    /**** OSCILLATOR pins ****/
    RCC_OSC32_IN = PC_14,
    RCC_OSC32_OUT = PC_15,

    /**** DEBUG pins ****/
    SYS_JTCK_SWCLK = PA_14,
    SYS_JTDI = PA_15,
    SYS_JTDO_SWO = PB_3,
    SYS_JTMS_SWDIO = PA_13,
    SYS_JTRST = PB_4,
    SYS_PVD_IN = PB_7,
    SYS_WKUP1 = PA_0,
    SYS_WKUP4 = PA_2,

    // Not connected
    NC = (int)0xFFFFFFFF
} PinName;

// Standardized LED and button names
// #define LED1     Px_x   // TODO
// #define BUTTON1  Px_x   // TODO

#ifdef __cplusplus
}
#endif

#endif
