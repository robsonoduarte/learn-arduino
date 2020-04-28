cmake_minimum_required(VERSION 2.8.4)
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/cmake/ArduinoToolchain.cmake)
set(CMAKE_CXX_STANDARD 17)
set(PROJECT_NAME blink)

set(${PROJECT_NAME}_BOARD megaADK)
# set(ARDUINO_CPU)
project(${PROJECT_NAME})

### Main sketch file
set(${PROJECT_NAME}_SKETCH blink.ino)

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/)


#### Additional settings for programmer. From programmers.txt
set(${PROJECT_NAME}_PROGRAMMER avrisp)
set(${PROJECT_NAME}_PORT /dev/ttyUSB0)
#set(megaADK.upload.speed 9600)

## Verbose build process
set(${PROJECT_NAME}_AFLAGS -v)

generate_arduino_firmware(${PROJECT_NAME})
print_board_list()
print_programmer_list()
