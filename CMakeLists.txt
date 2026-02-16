cmake_minimum_required(VERSION 3.12)
project(pyvec-uowm VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(pybind11 REQUIRED)

include_directories(include)

pybind11_add_module(pyvec 
    src/Vector.cpp 
    src/bindings.cpp
)

target_include_directories(pyvec PRIVATE ${PROJECT_SOURCE_DIR}/include)
