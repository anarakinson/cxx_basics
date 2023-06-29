cmake_minimum_required(VERSION 3.15)

project(json_library)

find_package(nlohmann_json CONFIG REQUIRED)
  
add_executable(
  header_only
  main.cpp
)

target_link_libraries(
  header_only PUBLIC 
  nlohmann_json::nlohmann_json
)


################################################################################

target_compile_features(header_only PUBLIC cxx_std_17)
set_target_properties(header_only PROPERTIES CXX_STANDARD_REQUIRED ON)

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR
  CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  target_compile_options(header_only
    PRIVATE
      -g
      -Wall
      -Wextra
      -Werror
      -pedantic)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
  target_compile_options(header_only
    PRIVATE
      /EHsc
      /W4
      /WX)
endif()