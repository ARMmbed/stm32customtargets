/* mbed Microcontroller Library
 *******************************************************************************
 * Copyright (c) 2018, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 */

#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"
#include "PinNamesTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    ALT0  = 0x100,
    ALT1  = 0x200,
    ALT2  = 0x300,
    ALT3  = 0x400
} ALTx;

typedef enum {
    PA_0  = 0x00,
    PA_0_ALT0 = PA_0 | ALT0,
    PA_0_ALT1 = PA_0 | ALT1,
    PA_1  = 0x01,
    PA_1_ALT0 = PA_1 | ALT0,
    PA_1_ALT1 = PA_1 | ALT1,
    PA_2  = 0x02,
    PA_2_ALT0 = PA_2 | ALT0,
    PA_2_ALT1 = PA_2 | ALT1,
    PA_3  = 0x03,
    PA_3_ALT0 = PA_3 | ALT0,
    PA_3_ALT1 = PA_3 | ALT1,
    PA_4  = 0x04,
    PA_4_ALT0 = PA_4 | ALT0,
    PA_5  = 0x05,
    PA_5_ALT0 = PA_5 | ALT0,
    PA_6  = 0x06,
    PA_6_ALT0 = PA_6 | ALT0,
    PA_7  = 0x07,
    PA_7_ALT0 = PA_7 | ALT0,
    PA_7_ALT1 = PA_7 | ALT1,
    PA_7_ALT2 = PA_7 | ALT2,
    PA_8  = 0x08,
    PA_9  = 0x09,
    PA_10 = 0x0A,
    PA_11 = 0x0B,
    PA_12 = 0x0C,
    PA_13 = 0x0D,
    PA_14 = 0x0E,
    PA_15 = 0x0F,
    PA_15_ALT0 = PA_15 | ALT0,

    PB_0  = 0x10,
    PB_0_ALT0 = PB_0 | ALT0,
    PB_0_ALT1 = PB_0 | ALT1,
    PB_1  = 0x11,
    PB_1_ALT0 = PB_1 | ALT0,
    PB_1_ALT1 = PB_1 | ALT1,
    PB_2  = 0x12,
    PB_3  = 0x13,
    PB_3_ALT0 = PB_3 | ALT0,
    PB_4  = 0x14,
    PB_4_ALT0 = PB_4 | ALT0,
    PB_4_ALT1 = PB_4 | ALT1,
    PB_5  = 0x15,
    PB_5_ALT0 = PB_5 | ALT0,
    PB_5_ALT1 = PB_5 | ALT1,
    PB_6  = 0x16,
    PB_7  = 0x17,
    PB_8  = 0x18,
    PB_8_ALT0 = PB_8 | ALT0,
    PB_8_ALT1 = PB_8 | ALT1,
    PB_9  = 0x19,
    PB_9_ALT0 = PB_9 | ALT0,
    PB_9_ALT1 = PB_9 | ALT1,
    PB_10 = 0x1A,
    PB_11 = 0x1B,
    PB_12 = 0x1C,
    PB_13 = 0x1D,
    PB_14 = 0x1E,
    PB_14_ALT0 = PB_14 | ALT0,
    PB_14_ALT1 = PB_14 | ALT1,
    PB_15 = 0x1F,
    PB_15_ALT0 = PB_15 | ALT0,
    PB_15_ALT1 = PB_15 | ALT1,

    PC_0  = 0x20,
    PC_0_ALT0 = PC_0 | ALT0,
    PC_0_ALT1 = PC_0 | ALT1,
    PC_1  = 0x21,
    PC_1_ALT0 = PC_1 | ALT0,
    PC_1_ALT1 = PC_1 | ALT1,
    PC_2  = 0x22,
    PC_2_ALT0 = PC_2 | ALT0,
    PC_2_ALT1 = PC_2 | ALT1,
    PC_3  = 0x23,
    PC_3_ALT0 = PC_3 | ALT0,
    PC_3_ALT1 = PC_3 | ALT1,
    PC_4  = 0x24,
    PC_4_ALT0 = PC_4 | ALT0,
    PC_5  = 0x25,
    PC_5_ALT0 = PC_5 | ALT0,
    PC_6  = 0x26,
    PC_6_ALT0 = PC_6 | ALT0,
    PC_7  = 0x27,
    PC_7_ALT0 = PC_7 | ALT0,
    PC_8  = 0x28,
    PC_8_ALT0 = PC_8 | ALT0,
    PC_9  = 0x29,
    PC_9_ALT0 = PC_9 | ALT0,
    PC_10 = 0x2A,
    PC_10_ALT0 = PC_10 | ALT0,
    PC_11 = 0x2B,
    PC_11_ALT0 = PC_11 | ALT0,
    PC_12 = 0x2C,
    PC_13 = 0x2D,
    PC_14 = 0x2E,
    PC_15 = 0x2F,

    PD_0  = 0x30,
    PD_1  = 0x31,
    PD_2  = 0x32,
    PD_3  = 0x33,
    PD_4  = 0x34,
    PD_5  = 0x35,
    PD_6  = 0x36,
    PD_7  = 0x37,
    PD_8  = 0x38,
    PD_9  = 0x39,
    PD_10 = 0x3A,
    PD_11 = 0x3B,
    PD_12 = 0x3C,
    PD_13 = 0x3D,
    PD_14 = 0x3E,
    PD_15 = 0x3F,

    PE_0  = 0x40,
    PE_1  = 0x41,
    PE_2  = 0x42,
    PE_3  = 0x43,
    PE_4  = 0x44,
    PE_5  = 0x45,
    PE_6  = 0x46,
    PE_7  = 0x47,
    PE_8  = 0x48,
    PE_9  = 0x49,
    PE_10 = 0x4A,
    PE_11 = 0x4B,
    PE_12 = 0x4C,
    PE_13 = 0x4D,
    PE_14 = 0x4E,
    PE_15 = 0x4F,

    PF_0  = 0x50,
    PF_1  = 0x51,
    PF_2  = 0x52,
    PF_3  = 0x53,
    PF_4  = 0x54,
    PF_5  = 0x55,
    PF_6  = 0x56,
    PF_7  = 0x57,
    PF_8  = 0x58,
    PF_9  = 0x59,
    PF_10 = 0x5A,
    PF_11 = 0x5B,
    PF_12 = 0x5C,
    PF_13 = 0x5D,
    PF_14 = 0x5E,
    PF_15 = 0x5F,

    PG_0  = 0x60,
    PG_1  = 0x61,
    PG_2  = 0x62,
    PG_3  = 0x63,
    PG_4  = 0x64,
    PG_5  = 0x65,
    PG_6  = 0x66,
    PG_7  = 0x67,
    PG_8  = 0x68,
    PG_9  = 0x69,
    PG_10 = 0x6A,
    PG_11 = 0x6B,
    PG_12 = 0x6C,
    PG_13 = 0x6D,
    PG_14 = 0x6E,
    PG_15 = 0x6F,

    PH_0  = 0x70,
    PH_1  = 0x71,
    PH_2  = 0x72,
    PH_3  = 0x73,
    PH_4  = 0x74,
    PH_5  = 0x75,
    PH_6  = 0x76,
    PH_7  = 0x77,
    PH_8  = 0x78,
    PH_9  = 0x79,
    PH_10 = 0x7A,
    PH_11 = 0x7B,
    PH_12 = 0x7C,
    PH_13 = 0x7D,
    PH_14 = 0x7E,
    PH_15 = 0x7F,

    PI_0  = 0x80,
    PI_1  = 0x81,
    PI_2  = 0x82,
    PI_3  = 0x83,
    PI_4  = 0x84,
    PI_5  = 0x85,
    PI_6  = 0x86,
    PI_7  = 0x87,
    PI_8  = 0x88,
    PI_9  = 0x89,
    PI_10 = 0x8A,
    PI_11 = 0x8B,
    PI_12 = 0x8C,
    PI_13 = 0x8D,
    PI_14 = 0x8E,
    PI_15 = 0x8F,

    // ADC internal channels
    ADC_TEMP = 0xF0,
    ADC_VREF = 0xF1,
    ADC_VBAT = 0xF2,

    // Generic signals namings
    LED1        = PE_2, 
    LED2        = PE_3, 
    LED3        = PE_4, 

    // Standardized button names
    BUTTON1 = PG_12,
    BUTTON2 = PG_13,

    // I2C & SPI
    I2C_SCL     = PB_8, /* I2C1 */
    I2C_SDA     = PB_9,
    SPI_MOSI    = PA_7,
    SPI_MISO    = PA_6,
    SPI_SCK     = PA_5,
    SPI_CS      = PB_6,
    PWM_OUT     = PB_3,

    /**** USB pins ****/
    USB_OTG_FS_DM = PA_11,
    USB_OTG_FS_DP = PA_12,
    USB_OTG_FS_ID = PA_10,
    USB_OTG_FS_SOF = PA_8,
    USB_OTG_FS_VBUS = PA_9,
    USB_OTG_HS_DM = PB_14,
    USB_OTG_HS_DP = PB_15,
    USB_OTG_HS_ID = PB_12,
    USB_OTG_HS_SOF = PA_4,
    USB_OTG_HS_ULPI_CK = PA_5,
    USB_OTG_HS_ULPI_D0 = PA_3,
    USB_OTG_HS_ULPI_D1 = PB_0,
    USB_OTG_HS_ULPI_D2 = PB_1,
    USB_OTG_HS_ULPI_D3 = PB_10,
    USB_OTG_HS_ULPI_D4 = PB_11,
    USB_OTG_HS_ULPI_D5 = PB_12,
    USB_OTG_HS_ULPI_D6 = PB_13,
    USB_OTG_HS_ULPI_D7 = PB_5,
    USB_OTG_HS_ULPI_DIR = PC_2,
    USB_OTG_HS_ULPI_NXT = PC_3,
    USB_OTG_HS_ULPI_STP = PC_0,
    USB_OTG_HS_VBUS = PB_13,

    /**** ETHERNET pins ****/
    ETH_COL = PA_3,
    ETH_CRS = PA_0,
    ETH_CRS_DV = PA_7,
    ETH_MDC = PC_1,
    ETH_MDIO = PA_2,
    ETH_PPS_OUT = PB_5,
    ETH_REF_CLK = PA_1,
    ETH_RXD0 = PC_4,
    ETH_RXD1 = PC_5,
    ETH_RXD2 = PB_0,
    ETH_RXD3 = PB_1,
    ETH_RX_CLK = PA_1,
    ETH_RX_DV = PA_7,
    ETH_RX_ER = PB_10,
    ETH_TXD0 = PB_12,
    ETH_TXD1 = PB_13,
    ETH_TXD2 = PC_2,
    ETH_TXD3 = PE_2,
    ETH_TXD3_ALT0 = PB_8,
    ETH_TX_CLK = PC_3,
    ETH_TX_EN = PB_11,

    /**** OSCILLATOR pins ****/
    RCC_OSC32_IN = PC_14,
    RCC_OSC32_OUT = PC_15,
    RCC_OSC_IN = PH_0,
    RCC_OSC_OUT = PH_1,

    /**** DEBUG pins ****/
    SYS_JTCK_SWCLK = PA_14,
    SYS_JTDI = PA_15,
    SYS_JTDO_SWO = PB_3,
    SYS_JTMS_SWDIO = PA_13,
    SYS_JTRST = PB_4,
    SYS_TRACECLK = PE_2,
    SYS_TRACED0 = PE_3,
    SYS_TRACED1 = PE_4,
    SYS_TRACED2 = PE_5,
    SYS_TRACED3 = PE_6,
    SYS_WKUP = PA_0,

    /**** SENSORS PINS ****/
    SENS1_PIN1 = PA_2,
    SENS1_PIN1_ALT0 = PA_2_ALT0,
    SENS1_PIN1_ALT1 = PA_2_ALT1,
    SENS1_PIN2 = PG_3,
    SENS1_PIN3 = PB_8,
    SENS1_PIN3_ALT0 = PB_8_ALT0,
    SENS1_PIN3_ALT1 = PB_8_ALT1,
    SENS1_PIN4 = PB_9,
    SENS1_PIN4_ALT0 = PB_9_ALT0,
    SENS1_PIN4_ALT1 = PB_9_ALT1,

    SENS2_PIN1 = PA_6,
    SENS2_PIN1_ALT0 = PA_6_ALT0,
    SENS2_PIN2 = PC_8,
    SENS2_PIN2_ALT0 = PC_8_ALT0,
    SENS2_PIN3 = PA_8,
    SENS2_PIN4 = PC_9,
    SENS2_PIN4_ALT0 = PC_9_ALT0,
    
    SENS3_PIN1 = PC_4,
    SENS3_PIN1_ALT0 = PC_4_ALT0,
    SENS3_PIN2 = PG_2,
    SENS3_PIN3 = PC_12, // UART_5_TX
    SENS3_PIN3_UART_TX = PC_12, // UART_5_TX
    SENS3_PIN4 = PD_2,  // UART_5_RX
    SENS3_PIN4_UART_RX = PD_2,  // UART_5_RX

    SENS4_PIN1 = PC_5,
    SENS4_PIN1_ALT0 = PC_5_ALT0,
    SENS4_PIN2 = PD_15,
    SENS4_PIN3 = PG_14, // USART_6_TX 
    SENS4_PIN3_UART_TX = PG_14, // USART_6_TX 
    SENS4_PIN4 = PG_9,  // USART_6_RX
    SENS4_PIN4_UART_RX = PG_9,  // USART_6_RX
    
    SENS5_PIN1 = PB_0,
    SENS5_PIN1_ALT0 = PB_0_ALT0,
    SENS5_PIN1_ALT1 = PB_0_ALT1,
    SENS5_PIN2 = PD_14,
    SENS5_PIN3 = PD_13,
    SENS5_PIN4 = PD_12,
    
    SENS6_PIN1 = PB_1,
    SENS6_PIN2 = PD_8,
    SENS6_PIN3 = PD_10,
    SENS6_PIN4 = PD_9,

    SENS_POWER_ON = PG_4, // SENSOR 5V TOGGLE

    /**** EXT PORT PINS ****/
    EXT_PIN1 = PF_3,
    EXT_PIN2 = PF_10,
    EXT_PIN3 = PF_4,
    EXT_PIN4 = PF_5,
    EXT_PIN5 = PC_0,
    EXT_PIN5_ALT0 = PC_0_ALT0,
    EXT_PIN5_ALT1 = PC_0_ALT1,
    EXT_PIN6 = PD_6, // RX
    EXT_PIN7 = PD_5, // TX
    EXT_PIN8 = PB_13, // SCK SPI
    EXT_PIN9 = PC_2, // MISO SPI
    EXT_PIN9_ALT0 = PC_2_ALT0,
    EXT_PIN9_ALT1 = PC_2_ALT1,
    EXT_PIN10 = PC_3, // MOSI SPI
    EXT_PIN10_ALT0 = PC_3_ALT0,
    EXT_PIN10_ATL1 = PC_3_ALT1,
    EXT_PIN11 = PF_0, // SDA I2C
    EXT_PIN12 = PF_1, // SCL I2C

    /**** RPI PORT PINS ****/
    RPI_SERIAL_TX = PA_9,
    RPI_SERIAL_RX = PA_10,
    RPI_CONSOLE = PG_5,
    RPI_STATUS = PG_6,
    RPI_BTN = PG_7,

    /**** CAN ****/
    CAN_TX = PD_1,
    CAN_RX = PD_0,
    CAN_EN = PA_15,
    CAN_EN_ALT0 = PA_15_ALT0,

    /**** USB-B/USB-micro FTDI PINS ****/
    FT_SERIAL_TX = PB_10,
    FT_SERIAL_RX = PB_11,
    FT_CBUS3 = PD_11,

    /**** HOST USB PINS ****/
    USB_DM = PA_11,
    USB_DP = PA_12,
    USB_CHARGE = PE_8,
    USB_CHARGE_IND = PE_7,

    // STDIO for console print
#ifdef MBED_CONF_TARGET_STDIO_UART_TX
    CONSOLE_TX = MBED_CONF_TARGET_STDIO_UART_TX,
#else
    CONSOLE_TX = FT_SERIAL_TX,
#endif
#ifdef MBED_CONF_TARGET_STDIO_UART_RX
    CONSOLE_RX = MBED_CONF_TARGET_STDIO_UART_RX,
#else
    CONSOLE_RX = FT_SERIAL_RX,
#endif

    SERIAL_TX   = CONSOLE_TX, /* USART 1*/
    SERIAL_RX   = CONSOLE_RX,

    /**** SD READER PINS****/
    SD_MOSI = PB_5_ALT0,
    SD_MISO = PC_11,
    SD_CLK = PC_10,
    SD_CS = PB_3_ALT0,
    SD_IN = PG_15,
    SD_POWER_ON = PD_7,

    /**** SERVO PINS ****/
    SERVO1_PWM = PE_9,
    SERVO2_PWM = PE_11,
    SERVO3_PWM = PE_13,
    SERVO4_PWM = PE_14,
    SERVO5_PWM = PB_15,
    SERVO5_PWM_ALT0 = PB_15_ALT0,
    SERVO5_PWM_ALT1 = PB_15_ALT1,
    SERVO6_PWM = PB_14,
    SERVO6_PWM_ALT0 = PB_14_ALT0,
    SERVO6_PWM_ALT1 = PB_14_ALT1,
    SERVO_ADC = PA_3,
    SERVO_ADC_ALT0 = PA_3_ALT0,
    SERVO_ADC_ALT1 = PA_3_ALT1,
    SERVO_SEL1 = PE_10,
    SERVO_SEL2 = PE_12,
    SERVO_POWER_ON = PE_15,

    /**** BAT AND BOOT PINS****/
    BAT_MEAS = PA_5,            //  VIN SUPPLY MEASURMENT
    BAT_MEAS_ALT0 = PA_5_ALT0,  // 	UPPER_RESISTOR: 56kOhm
	                            //  LOWER_RESISTOR: 10kOhm
                                //  Volts = ((2 * ADC_READ))/2520 * (UPPER_RESISTOR + LOWER_RESISTOR) / LOWER_RESISTOR;
    BOOT1 = PB_2,

    /**** MOTOR PINS ****/
    MOT12_SLEEP = PC_13,
    MOT12_FAULT = PE_0,
    MOT1_PWM = PF_6,
    MOT1A_IN = PG_10,
    MOT1B_IN = PG_11,
    MOT1A_ENC = PA_0,
    MOT1A_ENC_ALT0 = PA_0_ALT0,
    MOT1A_ENC_ALT1 = PA_0_ALT1,
    MOT1B_ENC = PA_1,
    MOT2_PWM = PF_7,
    MOT2A_IN = PD_3,
    MOT2B_IN = PD_4,
    MOT2A_ENC = PC_6,
    MOT2A_ENC_ALT0 = PC_6_ALT0,
    MOT2B_ENC = PC_7,
    MOT2B_ENC_ALT0 = PC_7_ALT0,
    MOT34_SLEEP = PC_14,
    MOT34_FAULT = PE_1,
    MOT3_PWM = PF_8,
    MOT3A_IN = PC_15,
    MOT3B_IN = PF_2,
    MOT3A_ENC = PB_4,
    MOT3A_ENC_ALT0 = PB_4_ALT0,
    MOT3A_ENC_ALT1 = PB_4_ALT1,
    MOT3B_ENC = PA_7,
    MOT3B_ENC_ALT0 = PA_7_ALT0,
    MOT3B_ENC_ALT1 = PA_7_ALT1,
    MOT3B_ENC_ALT2 = PA_7_ALT2,
    MOT4_PWM = PF_9,
    MOT4A_IN = PE_5,
    MOT4B_IN = PE_6, 
    MOT4A_ENC = PB_6,
    MOT4B_ENC = PB_7,   
    
    // Not connected
    NC = (int)0xFFFFFFFF
} PinName;

#ifdef __cplusplus
}
#endif

#endif
