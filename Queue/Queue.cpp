//
// Created by cowspirit on 2019-06-23.
//

#include "Queue.h"
#include <iostream>

bool Queue::Enqueue(int data) {
    if (IsFull()) {
        return false;
    }

    data_[rear_++] = data;
    if (rear_ == max_) {
        rear_ = 0;
    }

    ++size_;

    return true;
}

int Queue::Dequeue() {
    if (IsEmpty()) {
        return false;
    }

    int data = data_[front_++];
    if (front_ == max_) {
        front_ = 0;
    }
    --size_;

    return true;
}

int Queue::Peek() {
    if (IsEmpty()) {
        return -1;
    }

    return data_[front_];
}

void Queue::Clear() {
    size_ = front_ = rear_ = 0;
}

int Queue::Capacity() {
    return max_;
}

int Queue::Size() {
    return size_;
}

bool Queue::IsEmpty() {
    return (size_ <= 0);
}

bool Queue::IsFull() {
    return (size_ >= max_);
}

int Queue::Search(const int data) {
    for (int i = 0; i < size_; ++i) {
        const int index = (i + front_) % max_;
        if (data_[index] == data) {
            return index;
        }
    }

    return -1;
}

void Queue::Print() {
    for (int i = 0; i < size_; ++i) {
        std::cout << data_[(i + front_) % max_] << " ";
    }
    std::cout << std::endl;
}
