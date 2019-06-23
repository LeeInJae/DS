//
// Created by cowspirit on 2019-06-23.
//

#include "Stack.h"
#include <iostream>

bool Stack::Push(const int data) {
    if(IsFull()) {
        return false;
    }

    data_[index_++] = data;

    return true;
}

int Stack::Pop() {
    if (IsEmpty()) {
        return -1;
    }

    return data_[--index_];
}
int Stack::Peek() {
    if (IsEmpty()) {
        return -1;
    }

    return data_[index_ - 1];
}
void Stack::Clear() {
    index_ = 0;
}

int Stack::Capacity() {
    return max_;
}
int Stack::Size() {
    return index_;
}

bool Stack::IsEmpty() {
    return (index_ <= 0);
}
bool Stack::IsFull() {
    return (index_ >= max_);
}
int Stack::Search(const int data) {
    for(int i=0;i<index_;++i) {
        if (data_[i] == data) {
            return i;
        }
    }

    return -1;
}

void Stack::Print() {
    for(int i= index_ -1; i>=0; --i) {
        std::cout << data_[i] << std::endl;
    }
    std::cout << std::endl;
}