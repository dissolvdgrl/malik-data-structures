cmake_minimum_required(VERSION 3.23)
project(05)

set(CMAKE_CXX_STANDARD 23)

add_executable(05 main.cpp CashRegister.cpp CashRegister.h Dispenser.cpp Dispenser.h)
