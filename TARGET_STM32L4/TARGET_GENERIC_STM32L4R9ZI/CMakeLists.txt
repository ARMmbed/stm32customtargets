# Copyright (c) 2022 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

add_library(mbed-generic-stm32l4r9zi INTERFACE)

target_sources(mbed-generic-stm32l4r9zi
    INTERFACE
        PeripheralPins.c
        system_clock.c
)

target_include_directories(mbed-generic-stm32l4r9zi
    INTERFACE
        .
)

target_link_libraries(mbed-generic-stm32l4r9zi INTERFACE mbed-stm32l4r9xi)
