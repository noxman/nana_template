cmake_minimum_required(VERSION 3.17)
project(nana)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-s")

include_directories("D:\\msys64\\mingw64\\include")
link_directories(nana "D:\\msys64\\mingw64\\lib")

add_executable(
        nana WIN32
        main.cpp)

target_link_libraries(nana
        libnana.a
        png
        jpeg
        z)
#target_link_libraries(nana libnana.dll.a)