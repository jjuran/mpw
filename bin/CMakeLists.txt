#set(CMAKE_C_COMPILER "clang")
#set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_FLAGS "-std=c++11 -stdlib=libc++ -Wall -g -Wno-deprecated-declarations ")
SET(CMAKE_EXE_LINKER_FLAGS "-framework Carbon")

add_definitions(-I ${CMAKE_SOURCE_DIR}/)


add_executable(mpw loader.cpp)
target_link_libraries(mpw CPU_LIB)