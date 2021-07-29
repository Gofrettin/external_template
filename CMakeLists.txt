cmake_minimum_required(VERSION 3.19)
project(external_template)

set(CMAKE_CXX_STANDARD 20)

add_executable(external_template src/main.cpp src/utils/c_process.h src/utils/c_log.h src/utils/c_log.cpp src/utils/c_process.cpp)