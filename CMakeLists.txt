cmake_minimum_required(VERSION 2.8)

# Set the name of the project
project(mdpc_take2)

# setup version numbers
set(VERSION_MAJOR 0)
set(VERSION_MINOR 0)
set(VERSION_PATCH 1)

# find the libraries we want
find_package(SDL2 REQUIRED)
#find_package(SDL_image REQUIRED)
#find_package(SDL_ttf REQUIRED)
#find_package(Boost REQUIRED)

# use the constants defined for packages to setup compiler options
include_directories(${SDL2_INCLUDE_DIR})
#include_directories(${Boost_INCLUDE_DIRS})

# easy way to just grab all files named .hpp and .cpp
FILE( GLOB allHeaders *.hpp )
FILE( GLOB allSrcs *.cpp )

# define the target executable
add_executable( mdpc_take2
    ${allHeaders}
    ${allSrcs}
)

# link against the sdl libraries
target_link_libraries( mdpc_take2 ${SDL2_LIBRARY} )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -std=c++11")

# set any compiler options
set_target_properties( mdpc_take2 PROPERTIES LINKER_LANGUAGE CXX )
