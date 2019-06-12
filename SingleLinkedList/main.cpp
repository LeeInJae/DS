#include <iostream>
#include "List.h"
#include "CursorList.h"
#include "DoubleLinkedList.h"
#include "../BST/BST.h"
#include "../Hash/OpenAddressHash.h"
#include "../KMP/KMP.h"

int main() {
    KMP kmp("ABCABDBDBDCAB", "BD");
    kmp.findIndex();

    return 0;
}