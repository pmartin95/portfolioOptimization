cmake_minimum_required(VERSION 3.15)
project(portfolio_mgr)

include(FetchContent)

# Fetch Eigen
FetchContent_Declare(
  eigen
  GIT_REPOSITORY https://gitlab.com/libeigen/eigen.git
  GIT_TAG        master # or specify a certain commit or tag if needed
)

FetchContent_GetProperties(eigen)
if(NOT eigen_POPULATED)
  FetchContent_Populate(eigen)
  # Since Eigen is header-only, we don't need to build and install it.
  # We just add its directory to the include directories.
  include_directories(${eigen_SOURCE_DIR})
endif()

include_directories(${PROJECT_SOURCE_DIR}/src)
add_executable(portfolio_mgr src/main.cpp)
