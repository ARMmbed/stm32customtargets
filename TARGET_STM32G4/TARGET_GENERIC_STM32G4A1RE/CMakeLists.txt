# Copyright (c) 2022 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

add_library(mbed-generic-stm32g4a1re INTERFACE)

target_sources(mbed-generic-stm32g4a1re
    INTERFACE
        PeripheralPins.c
        system_clock.c
)

target_include_directories(mbed-generic-stm32g4a1re
    INTERFACE
        .
)

target_link_libraries(mbed-generic-stm32g4a1re INTERFACE mbed-stm32g4a1xe)
