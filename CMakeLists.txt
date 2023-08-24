cmake_minimum_required(VERSION 3.10) # specify the minimum version for CMake

project(Dungeon_Crawler) # give your project a name

set(CMAKE_CXX_STANDARD 20) # use C++20 standard

# add the executable. First argument is the name of the executable, followed by all source files.
# Assuming your main file is called main.cpp
add_executable(Dunegon_Crawler main.cpp Character.cpp Warrior.cpp Archer.cpp)

