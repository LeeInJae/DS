cmake_minimum_required(VERSION 3.14)
project(algorithm)

set(CMAKE_CXX_STANDARD 14)

add_executable(SingleLinkedList main.cpp List.cpp List.h data.h CursorList.cpp CursorList.h DoubleLinkedList.cpp DoubleLinkedList.h ../BST/BST.cpp ../BST/BST.h ../BST/BSTNode.h ../Hash/OpenAddressHash.cpp ../Hash/OpenAddressHash.h ../KMP/KMP.cpp ../KMP/KMP.h ../BoyerMoore/BoyerMoore.cpp ../BoyerMoore/BoyerMoore.h ../Set/Set.cpp ../Set/Set.h ../Set/BitSet.cpp ../Set/BitSet.h ../Euclidean/EuclideanMethod.cpp ../Euclidean/EuclideanMethod.h ../Hanoi/Hanoi.cpp ../Hanoi/Hanoi.h ../NQueen.cpp ../NQueen.h ../Sort/BubbleSort.cpp ../Sort/BubbleSort.h ../Sort/SelectionSort.cpp ../Sort/SelectionSort.h ../Sort/InsertionSort.cpp ../Sort/InsertionSort.h ../Sort/ShellSort.cpp ../Sort/ShellSort.h ../Sort/QuickSort.cpp ../Sort/QuickSort.h ../Sort/MergeSort.cpp ../Sort/MergeSort.h ../Sort/Heap.cpp ../Sort/Heap.h ../Sort/fsort.cpp ../Sort/fsort.h ../Stack/Stack.cpp ../Stack/Stack.h ../Queue/Queue.cpp ../Queue/Queue.h)