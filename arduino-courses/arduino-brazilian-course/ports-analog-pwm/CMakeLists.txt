cmake_minimum_required(VERSION 2.8.4)
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/cmake/ArduinoToolchain.cmake)
set(CMAKE_CXX_STANDARD 17)
set(PROJECT_NAME ports-analog-pwm)

set(${PROJECT_NAME}_BOARD nano)
project(${PROJECT_NAME})

### Main sketch file
set(${PROJECT_NAME}_SKETCH ports_analog_pwm.ino)

### Additional settings to add non-standard or your own Arduino libraries.
# For this example (libs will contain additional arduino libraries)
# An Arduino library my_lib will contain files in libs/my_lib/: my_lib.h, my_lib.cpp + any other cpp files
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/)

#### Additional settings for programmer. From programmers.txt
set(${PROJECT_NAME}_PORT /dev/ttyUSB0)

set(nano.upload.maximum_size 30720)
set(nano.upload.maximum_data_size 2048)
set(nano.upload.speed 57600)
set(nano.bootloader.low_fuses 0xFF)
set(nano.bootloader.high_fuses 0xDA)
set(nano.bootloader.extended_fuses 0x05)
set(nano.bootloader.file atmega/ATmegaBOOT_168_atmega328.hex)
set(nano.build.mcu atmega328p)

## Verbose build process
set(${PROJECT_NAME}_AFLAGS -v)

generate_arduino_firmware(${PROJECT_NAME})

print_board_list()
print_programmer_list()
