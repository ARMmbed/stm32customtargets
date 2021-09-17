# Copyright (c) 2021 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

add_library(mbed-generic-stm32h747zi INTERFACE)

target_sources(mbed-generic-stm32h747zi
    INTERFACE
        PeripheralPins.c
        system_clock.c
)

target_include_directories(mbed-generic-stm32h747zi
    INTERFACE
        .
)

target_link_libraries(mbed-generic-stm32h747zi INTERFACE mbed-stm32h747xi)
