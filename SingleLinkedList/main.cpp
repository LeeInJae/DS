#include <iostream>
#include "List.h"
#include "CursorList.h"

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

    CursorList* list = new CursorList(5);
    list->RemoveFront();
    list->InsertFront(3);
    list->PrintAll();
    list->InsertFront(5);
    list->PrintAll();
    list->InsertFront(1);
    list->PrintAll();
    list->InsertFront(2);
    list->PrintAll();
    list->RemoveFront();
    list->PrintAll();
    list->RemoveRear();
    list->PrintAll();
    list->Clear();
    list->PrintAll();
    list->RemoveRear();
    list->RemoveRear();
    return 0;
}