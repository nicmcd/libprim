cmake_minimum_required(VERSION 3.20)
project(libprim)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FindPkgConfig)

add_library(
  prim
  SHARED
  ${PROJECT_SOURCE_DIR}/src/prim/prim.h
  )

set_target_properties(
  prim
  PROPERTIES
  LINKER_LANGUAGE
  CXX
  POSITION_INDEPENDENT_CODE
  ON
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

configure_file(
  ${PROJECT_SOURCE_DIR}/libprim.pc.in
  ${CMAKE_CURRENT_BINARY_DIR}/libprim.pc
  @ONLY
  )
install(
  FILES
  ${CMAKE_CURRENT_BINARY_DIR}/libprim.pc
  DESTINATION
  ${CMAKE_INSTALL_LIBDIR}/pkgconfig/
  )
