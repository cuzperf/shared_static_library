cmake_minimum_required(VERSION 3.19)

project(shared_static_library)

cmake_policy(SET CMP0002 OLD)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories("${CMAKE_SOURCE_DIR}/src")

add_subdirectory(shared_use_shared)
add_subdirectory(shared_use_static)
add_subdirectory(static_use_shared)
add_subdirectory(static_use_static)

