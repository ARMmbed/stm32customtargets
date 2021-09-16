# Copyright (c) 2021 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

add_library(mbed-generic-stm32u585ri INTERFACE)

target_sources(mbed-generic-stm32u585ri
    INTERFACE
        PeripheralPins.c
        system_clock.c
)

target_include_directories(mbed-generic-stm32u585ri
    INTERFACE
        .
)

target_link_libraries(mbed-generic-stm32u585ri INTERFACE mbed-stm32u585xi)
