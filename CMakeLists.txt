cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(test_eigen C CXX ASM)
set(CMAKE_C_STNDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

include_directories(/Users/itoukouhei/pico/eigen)

add_executable(test_eigen
        test_eigen.cpp
)

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(test_eigen pico_stdlib hardware_uart)

# enable usb output, disable uart output
pico_enable_stdio_usb(test_eigen 1)
pico_enable_stdio_uart(test_eigen 0)

# create map/bin/hex file etc.
pico_add_extra_outputs(test_eigen)
