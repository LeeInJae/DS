//
// Created by cowspirit on 2019-06-08.
//

#ifndef ALGORITHM_DATA_H
#define ALGORITHM_DATA_H

struct Node {
    Node() = default;

    Node(const int data_, Node* next_ = nullptr) :
    data(data_), next(next_) { }

    int data;
    Node* next;
};

struct CursorNode {
    CursorNode() = default;
    CursorNode(const int data_, const int next_ = -1, const int deleteNext_ = -1) : data(data_), next(next_), deleteNext(deleteNext_) {}

    int data;
    int next;
    int deleteNext;
};
#endif //ALGORITHM_DATA_H
