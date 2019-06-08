//
// Created by cowspirit on 2019-06-08.
//

#ifndef ALGORITHM_CURSORLIST_H
#define ALGORITHM_CURSORLIST_H

#include "data.h"

class CursorList {
public:
    CursorList(const int size);
    ~CursorList();

    int GetInsertIndex();
    void DeleteIndex(const int index);
    void SetNode(const int index, const int data, const int next);
    void InsertFront(const int data);
    void InsertRear(const int data);
    void RemoveFront();
    void RemoveRear();
    int Search(const int data);
    void Clear();
    void PrintAll();
    void Terminate();

private:
    CursorNode* datas;
    int head;
    int deletedHead;
    int max;
    int size;
};


#endif //ALGORITHM_CURSORLIST_H
