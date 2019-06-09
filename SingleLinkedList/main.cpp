#include <iostream>
#include "List.h"
#include "CursorList.h"
#include "DoubleLinkedList.h"
#include "../BST/BST.h"

int main() {
    BST* bst = new BST;

    bst->Add(6);
    bst->Add(2);
    bst->Add(1);
    bst->Add(4);
    bst->Add(3);
    bst->Add(5);
    bst->Add(7);
    bst->Add(8);
    bst->Add(9);
    bst->PrintAll();

    bst->Remove(7);
    bst->PrintAll();

    bst->Remove(2);
    bst->PrintAll();
    std::cout << "end";
    /*
    bst->Add(1);
    bst->Add(2);
    bst->Add(3);
    bst->PrintAll();
    bst->Remove(2);
    bst->PrintAll();
*/
    //bst->Remove(2);
    //bst->PrintAll();
    //bst->Remove(6);
    //bst->PrintAll();


    return 0;
}