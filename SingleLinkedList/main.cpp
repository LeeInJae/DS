#include <iostream>
#include "List.h"
#include "CursorList.h"
#include "DoubleLinkedList.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    /*
    List* list = new List();

    list->InsertFront(1);
    list->InsertFront(2);
    list->InsertRear(3);

    list->RemoveFront();
    list->RemoveRear();
    list->RemoveFront();
    std::cout << "===-=============="  << std::endl;
    list->RemoveFront();
    list->RemoveFront();
    list->RemoveFront();

    list->InsertRear(1);
    //list->InsertRear(2);
    //list->InsertRear(3);
    //list->InsertRear(4);
    //list->InsertRear(5);

    delete list;
    */

    DoubleLinkedList* list = new DoubleLinkedList;
    list->RemoveFront();
    list->InsertFront(3);
    list->Print();
    list->InsertFront(5);
    list->Print();
    list->InsertFront(1);
    list->Print();
    list->InsertFront(2);
    list->Print();
    list->RemoveFront();
    list->Print();
    list->RemoveRear();
    list->Print();
    list->Clear();
    list->Print();
    list->RemoveRear();
    list->RemoveRear();
    list->InsertFront(100);
    list->InsertFront(200);
    list->InsertFront(300);
    list->InsertFront(400);
    list->InsertFront(500);
    list->InsertRear(200);
    list->InsertRear(300);
    list->InsertRear(400);
    list->InsertRear(500);
    list->InsertRear(600);
    list->Print();
    list->PrintReverse();
    return 0;
}