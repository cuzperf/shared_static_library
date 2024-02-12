project(shared_use_static)

# 设置动态库搜索路径为相对路径
SET(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
SET(CMAKE_INSTALL_RPATH "\${ORIGIN}/${PROJECT_NAME}")

add_library(is_prime
  STATIC
  ${CMAKE_SOURCE_DIR}/src/is_prime.cpp
)

add_library(is_prime_wrapper
  SHARED
  ${CMAKE_SOURCE_DIR}/src/is_prime_wrapper.cpp
)

add_executable(shared_use_static_exe
  ${CMAKE_SOURCE_DIR}/src/main.cpp
)

target_link_libraries(is_prime_wrapper
  is_prime
)

target_link_libraries(shared_use_static_exe
  is_prime_wrapper
)

set_target_properties(shared_use_static_exe
  PROPERTIES
    CXX_STANDARD 17
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)
