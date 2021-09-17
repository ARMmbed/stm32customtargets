# Copyright (c) 2021 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

add_library(mbed-generic-stm32l4r5ai INTERFACE)

target_sources(mbed-generic-stm32l4r5ai
    INTERFACE
        PeripheralPins.c
        system_clock.c
)

target_include_directories(mbed-generic-stm32l4r5ai
    INTERFACE
        .
)

target_link_libraries(mbed-generic-stm32l4r5ai INTERFACE mbed-stm32l4r5xi)
