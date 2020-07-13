cmake_minimum_required(VERSION 2.8.4)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/cmake/ArduinoToolchain.cmake)
set(CMAKE_CXX_STANDARD 17)
set(PROJECT_NAME struct_array)

project(${PROJECT_NAME})
set(${PROJECT_NAME}_BOARD nano)
set(${PROJECT_NAME}_SKETCH struct_array.ino)
set(${PROJECT_NAME}_PROGRAMMER avrisp)
set(${PROJECT_NAME}_PORT /dev/ttyUSB0)
set(${PROJECT_NAME}_AFLAGS -v)

set(nano.upload.maximum_size 30720)
set(nano.upload.maximum_data_size 2048)
set(nano.upload.speed 57600)
set(nano.bootloader.low_fuses 0xFF)
set(nano.bootloader.high_fuses 0xDA)
set(nano.bootloader.extended_fuses 0x05)
set(nano.bootloader.file atmega/ATmegaBOOT_168_atmega328.hex)
set(nano.build.mcu atmega328p)


link_directories(${CMAKE_CURRENT_SOURCE_DIR}/)

generate_arduino_firmware(${PROJECT_NAME})
