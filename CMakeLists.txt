cmake_minimum_required(VERSION 3.20)

project(Anagrams_modulo_two)

configure_file(anagrams.txt anagrams.txt COPYONLY)
configure_file(remaining_territories.txt remaining_territories.txt COPYONLY)

add_library(handle_IO handle_IO.cpp)
target_include_directories(handle_IO PUBLIC ${CMAKE_SOURCE_DIR})

add_executable(test_IO test_IO.cpp)
target_link_libraries(test_IO handle_IO)

add_library(process_strings process_strings.cpp)
target_include_directories(process_strings PUBLIC ${CMAKE_SOURCE_DIR})

add_executable(test_str_proc test_str_proc.cpp)
target_link_libraries(test_str_proc process_strings)
