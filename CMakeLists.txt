cmake_minimum_required(VERSION 3.10)

set (CMAKE_CXX_STANDARD 11)

project (run_test)

file(GLOB LIB_SOURCES
    ./include/*.hpp
    ./src/*.cpp
)

include_directories("./include/")
include_directories("./tests/include/")
add_library(MyLibrary ${LIB_SOURCES})

include(ExternalProject)
ExternalProject_Add(gtest
  URL https://github.com/google/googletest/archive/release-1.11.0.zip
  PREFIX ${CMAKE_CURRENT_BINARY_DIR}/gtest
  INSTALL_COMMAND ""
)
ExternalProject_Get_Property(gtest source_dir binary_dir)

add_executable(run_test ./tests/test_main.cpp)

add_dependencies(run_test gtest)
include_directories(${source_dir}/googletest/include)
target_link_libraries(run_test ${binary_dir}/lib/libgtest.a)
target_link_libraries(run_test ${binary_dir}/lib/libgtest_main.a)
target_link_libraries(run_test MyLibrary)
    
enable_testing()
add_test(NAME    run_test 
         COMMAND run_test)

