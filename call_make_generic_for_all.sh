#!/bin/sh

python -u make_generic_boards.py -f STM32F0
python -u make_generic_boards.py -f STM32F1
python -u make_generic_boards.py -f STM32F2
python -u make_generic_boards.py -f STM32F3
python -u make_generic_boards.py -f STM32F4
python -u make_generic_boards.py -f STM32F7

python -u make_generic_boards.py -f STM32G0
python -u make_generic_boards.py -f STM32G4

python -u make_generic_boards.py -f STM32H7

python -u make_generic_boards.py -f STM32L0
python -u make_generic_boards.py -f STM32L1
python -u make_generic_boards.py -f STM32L4
python -u make_generic_boards.py -f STM32L5

python -u make_generic_boards.py -f STM32U5

python -u make_generic_boards.py -f STM32WB
python -u make_generic_boards.py -f STM32WL
