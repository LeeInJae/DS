cmake_minimum_required(VERSION 3.14)
project(algorithm)

set(CMAKE_CXX_STANDARD 14)

add_executable(SingleLinkedList main.cpp List.cpp List.h data.h CursorList.cpp CursorList.h DoubleLinkedList.cpp DoubleLinkedList.h ../BST/BST.cpp ../BST/BST.h ../BST/BSTNode.h ../Hash/OpenAddressHash.cpp ../Hash/OpenAddressHash.h ../KMP/KMP.cpp ../KMP/KMP.h)