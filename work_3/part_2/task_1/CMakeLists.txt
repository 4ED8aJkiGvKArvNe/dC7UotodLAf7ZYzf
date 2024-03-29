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

add_executable(main main.cpp)
add_executable(
  tests
  tests.cpp
)
target_link_libraries(
  tests
  GTest::gtest_main
  GTest::gmock
)

include(GoogleTest)
gtest_discover_tests(tests)
