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

int main() {
    BitSet s1;
    s1.Add(1);
    s1.Add(3);
    s1.Print();
    std::cout << "size=  " << s1.Size()  << std::endl;

    s1.Add(13);
    s1.Add(17);
    s1.Add(22);
    s1.Add(5);
    s1.Add(0);
    s1.Add(31);

    s1.Print();
    std::cout << "size=  " << s1.Size()  << std::endl;

    BitSet s2;
    s2.Add(1);
    s2.Add(5);

    s1.Difference(s2);
    s1.Print();
    std::cout << "size=  " << s1.Size()  << std::endl;

    BitSet s3;
    s3.Add(1);
    s3.Add(5);

    if(s3.IsEqual(s2)) {
        std::cout << "s3 and s2 is equal" << std::endl;
    }
    return 0;
}