#include <iostream>
#include "List.h"
#include "CursorList.h"
#include "DoubleLinkedList.h"
#include "../BST/BST.h"
#include "../Hash/OpenAddressHash.h"
#include "../KMP/KMP.h"
#include "../BoyerMoore/BoyerMoore.h"
int main() {
    BoyerMoore boyerMoore("ABCABDBDBDCAB", "BD");
    boyerMoore.GetMatchingIndexes();

    return 0;
}