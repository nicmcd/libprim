cmake_minimum_required(VERSION 3.10)
project(libprim)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_library(
  prim
  STATIC
  ${PROJECT_SOURCE_DIR}/src/prim/prim.h
  )
set_target_properties(
  prim
  PROPERTIES
  LINKER_LANGUAGE
  CXX
  )
target_include_directories(
  prim
  PUBLIC
  ${PROJECT_SOURCE_DIR}/src
  )
include(GNUInstallDirs)
install(
  FILES
  ${PROJECT_SOURCE_DIR}/src/prim/prim.h
  DESTINATION
  ${CMAKE_INSTALL_INCLUDEDIR}/prim/
  )
install(
  TARGETS
  prim
  )
