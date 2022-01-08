cmake_minimum_required(VERSION 3.10)
 

#############################
# Easy Math
#############################
project(simplemath)

add_library(simplemath INTERFACE)

target_include_directories(simplemath INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/lib)


#############################
# Tests
#############################

enable_testing()

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
include(CTest)

project(simplemathtest)

add_executable(simplemathtest ${CMAKE_CURRENT_SOURCE_DIR}/tests/Tests.cpp)

target_link_libraries(simplemathtest simplemath ${GTEST_LIBRARIES} pthread)
add_test(NAME simplemathtest COMMAND simplemathtest)
