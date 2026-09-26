cmake_minimum_required(VERSION 3.14)
project(slope_project)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(slope)

add_executable(slope_project slides.cpp slides/deck.yaml slides/snippets.lua slides/packages.tex)
target_link_libraries(slope_project slope)
