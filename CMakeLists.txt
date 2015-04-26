# top-level

cmake_minimum_required (VERSION 2.8)
project (Tutorial)


include_directories(include)
#include_directories(irrKlang-64bit/include)
include_directories(fmod/api/lowlevel/inc)

#link_directories(fmod/api/lowlevel/lib/x86_64)
find_library(FMOD NAMES fmod fmodL PATHS fmod/api/lowlevel/lib/x86_64)

add_subdirectory(glfw)
include_directories(glfw/include)


add_subdirectory(src)



