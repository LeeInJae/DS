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

int main() {
    Hanoi hanoi;

    hanoi.move(3, 1, 3);
    return 0;
}