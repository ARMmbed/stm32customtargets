# Copyright (c) 2021 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

add_library(mbed-generic-stm32g0b0ce INTERFACE)

target_sources(mbed-generic-stm32g0b0ce
    INTERFACE
        PeripheralPins.c
        system_clock.c
)

target_include_directories(mbed-generic-stm32g0b0ce
    INTERFACE
        .
)

target_link_libraries(mbed-generic-stm32g0b0ce INTERFACE mbed-stm32g0b0xe)
