//
// Created by cowspirit on 2019-06-08.
//

#include "CursorList.h"
#include <iostream>

CursorList::CursorList(const int size_) :size(size_), head(-1), deletedHead(-1), max(-1) {
    datas = new CursorNode[size];
}

CursorList::~CursorList() {
    delete []datas;
}

int CursorList::GetInsertIndex() {
    if (deletedHead == -1) {
        return (++max);
    }

    int index = deletedHead;
    deletedHead = datas[deletedHead].deleteNext;

    return index;
}

void CursorList::DeleteIndex(const int index)
{
    if (deletedHead == -1) {
        deletedHead = index;
        datas[deletedHead].next = -1;
        return;
    }

    int temp_index = deletedHead;
    deletedHead = index;
    datas[index].next = temp_index;
}

void CursorList::SetNode(const int index, const int data, const int next) {
    datas[index].data = data;
    datas[index].next = next;
}

void CursorList::InsertFront(const int data) {
    int index = head;
    head = GetInsertIndex();
    SetNode(head, data, index);
}

void CursorList::InsertRear(const int data) {
    if (head == -1) {
        InsertFront(data);
        return;
    }

    int index = head;
    while(datas[index].next != -1) {
        index = datas[index].next;
    }

    int insert_index = GetInsertIndex();
    datas[index].next = insert_index;
    SetNode(insert_index, data, -1);
}

void CursorList::RemoveFront() {
    if (head == -1) {
        return;
    }

    int index = datas[head].next;
    DeleteIndex(head);
    head = index;
}

void CursorList::RemoveRear() {
    if (head == -1) {
        return;
    }

    if (datas[head].next == -1) {
        RemoveFront();
        return;
    }

    int prev_index = head;
    int index = datas[head].next;

    while(datas[index].next != -1) {
        prev_index = index;
        index = datas[index].next;
    }

    DeleteIndex(index);
    datas[prev_index].next = -1;
}

void CursorList::Clear() {
    while(head != -1) {
        RemoveFront();
    }
}

void CursorList::PrintAll() {
    if (head == -1) {
        std::cout << "data empty" << std::endl;
        return;
    }

    int index = head;
    while(index != -1) {
        std::cout << datas[index].data << "  ";
        index = datas[index].next;
    }
    std::cout << std::endl;
}

void CursorList::Terminate() {

}

int CursorList::Search(const int data) {
    int index = head;
    while(index != -1) {
        if (datas[index].data == data) {
            return index;
        }
        
        index = datas[index].next;
    }
    
    return -1;
}
