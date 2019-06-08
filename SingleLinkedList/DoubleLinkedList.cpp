//
// Created by cowspirit on 2019-06-09.
//

#include "DoubleLinkedList.h"
#include <iostream>

DoubleLinkedList::DoubleLinkedList() {
    DNode* dummy = new DNode;
    dummy->prev = dummy->next = dummy;
    head = dummy;
}

DoubleLinkedList::~DoubleLinkedList() {
    Clear();
    delete head;
}

void DoubleLinkedList::SetNode(DNode* node, const int data, DNode* prev, DNode* next) {
    node->data = data;
    node->prev = prev;
    node->next = next;
}

DNode* DoubleLinkedList::Search(const int data)
{
    DNode* node = head->next;
    while(node != head) {
        if (node->data == data) {
            return node;
        }

        node = node->next;
    }

    return nullptr;
}

bool DoubleLinkedList::IsEmpty()
{
    return (head->next == head);
}

void DoubleLinkedList::Print()
{
    if(IsEmpty()) {
        std::cout << "list is empty" << std::endl;
        return;
    }

    DNode* node = head->next;
    while(node != head) {
        std::cout << node->data << " ";
        node = node->next;
    }
    std::cout << std::endl;
}

void DoubleLinkedList::PrintReverse()
{
    if(IsEmpty()) {
        std::cout << "list is empty" << std::endl;
        return;
    }

    DNode* node = head->prev;
    while(node != head) {
        std::cout << node->data << " ";
        node = node->prev;
    }
    std::cout << std::endl;
}

DNode* DoubleLinkedList::Next(DNode* node) {
    if (IsEmpty() || node->next == head) {
      return nullptr;
    }

    return (node->next);
}

DNode* DoubleLinkedList::Prev(DNode* node)
{
    if (IsEmpty() || node->prev == head) {
        return nullptr;
    }

    return (node->prev);
}

void DoubleLinkedList::InsertAfter(DNode* node, const int data)
{
    DNode* newNode = new DNode;

    DNode* next = node->next;
    node->next = node->next->prev = newNode;
    SetNode(newNode, data, node, next);
}

void DoubleLinkedList::InsertFront(const int data) {
    InsertAfter(head, data);
}

void DoubleLinkedList::InsertRear(const int data)
{
    InsertAfter(head->prev, data);
}

void DoubleLinkedList::Remove(DNode* node)
{
    node->prev->next = node->next;
    node->next->prev = node->prev;
    delete node;
}

void DoubleLinkedList::RemoveFront()
{
    if (IsEmpty()) {
        std::cout << "list is empty" << std::endl;
        return;
    }
    Remove(head->next);
}

void DoubleLinkedList::RemoveRear()
{
    if (IsEmpty()) {
        std::cout << "list is empty" << std::endl;
        return;
    }
    Remove(head->prev);
}

void DoubleLinkedList::Clear()
{
    while(!IsEmpty()) {
        RemoveFront();
    }
}