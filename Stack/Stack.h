//
// Created by cowspirit on 2019-06-23.
//

#ifndef ALGORITHM_STACK_H
#define ALGORITHM_STACK_H

#include <array>

class Stack {
public:
    Stack(const int max) : max_(max), index_(0) {
        data_ = new int[max];
    }

    bool Push(const int data);
    int Pop();
    int Peek();
    void Clear();
    int Capacity();
    int Size();
    bool IsEmpty();
    bool IsFull();
    int Search(const int data);
    void Print();
    ~Stack() {
        delete[] data_;
    }

private:
    int max_;
    int index_;
    int* data_;
};


#endif //ALGORITHM_STACK_H
