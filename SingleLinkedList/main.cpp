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

int main() {
    InsertionSort insertionSort(std::vector<int>{100,3,2,5,7,1020,30});
    insertionSort.Sort();
    return 0;
}