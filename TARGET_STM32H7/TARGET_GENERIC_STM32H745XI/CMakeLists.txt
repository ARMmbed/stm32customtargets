# Copyright (c) 2022 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

add_library(mbed-generic-stm32h745xi-cm4 INTERFACE)

target_sources(mbed-generic-stm32h745xi-cm4
    INTERFACE
        PeripheralPins.c
        system_clock.c
)

target_include_directories(mbed-generic-stm32h745xi-cm4
    INTERFACE
        .
)

target_link_libraries(mbed-generic-stm32h745xi-cm4 INTERFACE mbed-stm32h745xi-cm4)

add_library(mbed-generic-stm32h745xi-cm7 INTERFACE)

target_sources(mbed-generic-stm32h745xi-cm7
    INTERFACE
        PeripheralPins.c
        system_clock.c
)

target_include_directories(mbed-generic-stm32h745xi-cm7
    INTERFACE
        .
)

target_link_libraries(mbed-generic-stm32h745xi-cm7 INTERFACE mbed-stm32h745xi-cm7)
