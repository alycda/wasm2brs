cmake_minimum_required(VERSION 3.13.4)
project(hermes_roku)

add_definitions(-D_WASI_EMULATED_MMAN -DWASI)

link_libraries(-lwasi-emulated-mman)

add_link_options(-Wl,-error-limit=0)

include_directories(. ../../include)

add_subdirectory(third_party/hermes)