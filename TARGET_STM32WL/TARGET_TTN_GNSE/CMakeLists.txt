# Copyright (c) 2020 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

add_library(mbed-ttn-gnse INTERFACE)

target_sources(mbed-ttn-gnse
    INTERFACE
        PeripheralPins.c
        TTN_GNSE_radio_driver.cpp
)

target_include_directories(mbed-ttn-gnse
    INTERFACE
        .
)

target_link_libraries(mbed-ttn-gnse INTERFACE
    mbed-stm32wle5xc
    mbed-lorawan
)
