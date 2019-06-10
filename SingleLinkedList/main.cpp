#include <iostream>
#include "List.h"
#include "CursorList.h"
#include "DoubleLinkedList.h"
#include "../BST/BST.h"
#include "../Hash/OpenAddressHash.h"

int main() {
    OpenAddressHash* hash = new OpenAddressHash(13);
    hash->Add(Data(14));
    hash->Add(Data(29));
    hash->Add(Data(5));
    hash->Add(Data(6));
    hash->Add(Data(34));
    hash->Add(Data(75));
    hash->Add(Data(37));
    hash->Add(Data(51));
    hash->Dump();
    hash->Add(Data(18));
    hash->Dump();
    delete hash;



    return 0;
}