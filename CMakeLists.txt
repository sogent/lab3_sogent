cmake_minimum_required(VERSION 3.20)
project(lab3_sogent)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab3_sogent
        CS201L_Fall2021_Lab3.docx
        Lab03.cpp
        README.md checkingmodule.cpp checkingmodule.h)
