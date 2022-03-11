cmake_minimum_required(VERSION 3.0.0)
project(Graph VERSION 0.1.0)

include(CTest)
enable_testing()

#add_library(Graph Graph.cpp)
add_executable(Graph src/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
