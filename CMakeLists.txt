cmake_minimum_required(VERSION 3.8)
project(Sorry_Team)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp space.h piece.cpp piece.h game_board.cpp game_board.h)
add_executable(untitled5 ${SOURCE_FILES})