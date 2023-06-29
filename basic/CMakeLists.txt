cmake_minimum_required(VERSION 3.5)

project(some_project)

add_executable(
    myproject
    permutations.cpp
)

set_target_properties(myproject
    PROPERTIES 
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)
