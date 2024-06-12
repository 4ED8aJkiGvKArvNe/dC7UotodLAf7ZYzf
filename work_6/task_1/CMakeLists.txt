cmake_minimum_required(VERSION 3.14)

get_filename_component(current_directory ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${current_directory})

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  main
  main.cpp
  func_1.cpp
  func_2.cpp
  func_3.cpp
)

add_executable(
  test_calculate
  tests/test_calculate.cpp
  tests/mocks/func_1.cpp
  tests/mocks/func_2.cpp
  tests/mocks/func_3.cpp
)
target_link_libraries(
  test_calculate
  GTest::gtest_main
  GTest::gmock
)

add_executable(
  test_func_1_2_3
  tests/test_func_1_2_3.cpp
)
target_link_libraries(
  test_func_1_2_3
  GTest::gtest_main
  GTest::gmock
)

include(GoogleTest)
gtest_discover_tests(test_calculate)
gtest_discover_tests(test_func_1_2_3)
