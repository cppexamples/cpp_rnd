cmake_minimum_required(VERSION 3.14)
project(trnd)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(trnd main.cpp trnd.cpp)
target_compile_options(trnd PRIVATE -O3) #tail recursion
