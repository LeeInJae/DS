//
// Created by cowspirit on 2019-06-09.
//

#ifndef ALGORITHM_DOUBLELINKEDLIST_H
#define ALGORITHM_DOUBLELINKEDLIST_H

#include "data.h"

class DoubleLinkedList {
public:
    DoubleLinkedList();
    ~DoubleLinkedList();
    DNode* Search(const int data);
    void PrintReverse();
    void Print();
    DNode* Next(DNode* node);
    DNode* Prev(DNode* node);
    void InsertAfter(DNode* node, const int data);
    void InsertFront(const int data);
    void InsertRear(const int data);
    void Remove(DNode* node);
    void RemoveFront();
    void RemoveRear();
    void SetNode(DNode* node, const int data, DNode* prev, DNode* next);
    bool IsEmpty();
    void Clear();
private:
    DNode* head;
};


#endif //ALGORITHM_DOUBLELINKEDLIST_H
