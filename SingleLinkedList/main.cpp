#include <iostream>
#include "List.h"
#include "CursorList.h"
#include "DoubleLinkedList.h"
#include "../BST/BST.h"
#include "../Hash/OpenAddressHash.h"
#include "../KMP/KMP.h"
#include "../BoyerMoore/BoyerMoore.h"
#include "../Set/Set.h"

int main() {
    Set s1(10);
    s1.Add(3);
    s1.Add(4);
    s1.Add(5);
    s1.Add(2);
    s1.Add(7);
    s1.Add(8);
    s1.Add(9);
    s1.Add(0);
    s1.Add(1);
    s1.Add(100);
    s1.Add(200);
    s1.Print();

    Set s2(3);
    s2.Add(1);
    s2.Add(7);
    s2.Add(3);

    s1.Print();

    Set s3(10);
    s3.Union(s2);
    s3.Print();
    s3.Union(s1);
    s3.Print();
    std::cout << "=====" << std::endl;
    s3.Difference(s2);
    s3.Print();
    return 0;
}