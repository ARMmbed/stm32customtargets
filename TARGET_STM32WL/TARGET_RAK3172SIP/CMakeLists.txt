# Copyright (c) 2020 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

add_library(mbed-rak3172sip INTERFACE)

target_sources(mbed-rak3172sip
    INTERFACE
        PeripheralPins.c
        RAK3172SIP_radio_driver.cpp
)

target_include_directories(mbed-rak3172sip
    INTERFACE
        .
)

target_link_libraries(mbed-rak3172sip INTERFACE
    mbed-stm32wle5xc
    mbed-lorawan
)
