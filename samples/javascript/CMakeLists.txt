cmake_minimum_required(VERSION 3.13.4)
project(javascript)

add_compile_options(-Oz)

add_link_options(-Wl,--export-dynamic)

add_compile_options(-Wno-macro-redefined -Wno-writable-strings -Wno-return-type -Wno-visibility)

include_directories(. ./duktape ../../include)

add_executable(javascript javascript.cc controlled_time.cc duktape/duktape.c duktape/duk_console.c)
add_executable(react react.cc controlled_time.cc duktape/duktape.c duktape/duk_console.c)
