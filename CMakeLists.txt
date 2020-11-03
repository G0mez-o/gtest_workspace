cmake_minimum_required(VERSION 3.0)
project(my_gtest_practice)
find_package(GTest REQUIRED)
include_directories(
  include
  ${GTEST_DIR}
  )
add_executable(main src/main.cpp)
add_executable(unit_test test/test1.cpp)
target_link_libraries(unit_test
    GTest::GTest
    GTest::Main
    )

enable_testing()

add_test(
  NAME test1
  COMMAND $<TARGET_FILE:unit_test>
  )
