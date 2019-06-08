//
// Created by cowspirit on 2019-06-08.
//

#include "List.h"
#include <stdio.h>
#include <iostream>

List::~List() {

}

void List::InsertFront(const int data) {
    Node* newNode = new Node(data, head);
    head = newNode;
    PrintAll();
}

void List::InsertRear(const int data) {
    if (head == nullptr) {
        InsertFront(data);

        return;
    }

    Node* ptr = head;
    while(ptr->next != nullptr) {
        ptr = ptr->next;
    }

    Node* newNode = new Node(data);
    ptr->next = newNode;

    PrintAll();
}

void List::RemoveFront() {
    if (head == nullptr) {
        PrintAll();
        return;
    }

    Node* ptr = head;
    head = head->next;

    delete ptr;

    PrintAll();
}

void List::RemoveRear() {
    if (head == nullptr) {
        PrintAll();
        return;
    }

    if (head->next == nullptr) {
        RemoveFront();

        return;
    }

    Node* prev = head;
    Node* ptr = head->next;
    while(ptr->next != nullptr) {
        prev = ptr;
        ptr = ptr->next;
    }

    prev->next = nullptr;
    delete ptr;

    PrintAll();
}

Node* List::Search(const int data) {
    Node* ptr = head;
    while(ptr != nullptr) {
        if (ptr->data == data) {
            return ptr;
        }

        ptr = ptr->next;
    }

    return nullptr;
}

void List::Clear() {
    while(head != nullptr) {
        RemoveFront();
    }
}

void List::PrintAll() {
    if (head == nullptr) {
        std::cout << "empty" << std::endl;

        return;
    }
    Node* ptr = head;
    while(ptr != nullptr) {
        std::cout << ptr->data << " -> ";
        ptr = ptr->next;
    }


    std::cout << std::endl;
}