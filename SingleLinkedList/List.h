//
// Created by cowspirit on 2019-06-08.
//

#ifndef ALGORITHM_LIST_H
#define ALGORITHM_LIST_H

#include "data.h"

class List {
public:
    List() = default;

    void InsertFront(const int data);
    void InsertRear(const int data);
    void RemoveFront();
    void RemoveRear();
    Node* Search(const int data);
    void Clear();
    void PrintAll();

    ~List();


private:
    Node* head = nullptr;
    Node* tail = nullptr;
};
#endif //ALGORITHM_LIST_H
