cmake_minimum_required (VERSION 3.5)

project(fraction)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SRCS 
	"Fraction.cpp" 
	"main.cpp")
add_executable (fraction ${SRCS})
if (MSVC)
    add_compile_options(/W4 /WX /DEBUG)
else()
    add_compile_options(-Wall -Werror -g)
endif()
#test