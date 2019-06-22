#include <iostream>
#include "List.h"
#include "CursorList.h"
#include "DoubleLinkedList.h"
#include "../BST/BST.h"
#include "../Hash/OpenAddressHash.h"
#include "../KMP/KMP.h"
#include "../BoyerMoore/BoyerMoore.h"
#include "../Set/Set.h"
#include "../Set/BitSet.h"
#include "../Euclidean/EuclideanMethod.h"
#include "../Hanoi/Hanoi.h"
#include "../NQueen.h"
#include "../Sort/BubbleSort.h"
#include "../Sort/SelectionSort.h"
#include "../Sort/InsertionSort.h"
#include "../Sort/ShellSort.h"
#include "../Sort/QuickSort.h"
#include "../Sort/MergeSort.h"
#include "../Sort/Heap.h"
#include "../Sort/fsort.h"

int main() {
    Fsort fsort(std::vector<int>{10, 10 ,1, 2, 3, 1, 2, 6, 6, 8, 89 , 100});
    fsort.Sort(100);
    return 0;
}