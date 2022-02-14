# Copyright (c) 2022 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

add_library(mbed-generic-stm32g441cb INTERFACE)

target_sources(mbed-generic-stm32g441cb
    INTERFACE
        PeripheralPins.c
        system_clock.c
)

target_include_directories(mbed-generic-stm32g441cb
    INTERFACE
        .
)

target_link_libraries(mbed-generic-stm32g441cb INTERFACE mbed-stm32g441xb)
