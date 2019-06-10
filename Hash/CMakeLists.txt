cmake_minimum_required(VERSION 3.14)
project(Hash)

set(CMAKE_CXX_STANDARD 14)

add_executable(Hash main.cpp Data.h Data.cpp Bucket.cpp Bucket.h ChainHash.cpp ChainHash.h)