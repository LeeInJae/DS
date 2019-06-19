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

int main() {
    BubbleSort bubbleSort(std::vector<int>{3, 10, 45, 100, 20});
    bubbleSort.Sort();
    bubbleSort.Sort2();
    return 0;
}