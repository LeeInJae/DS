//
// Created by cowspirit on 2019-06-23.
//

#include "Heap.h"
#include <iostream>

void Heap::Downheap(int left, int right) {
    int temp = data_[left];
    int parent = left;
    while (parent < (right + 1) / 2) {
        int left_child = parent * 2 + 1;
        int right_child = parent * 2 + 2;
        const int child = (right_child <= right && data_[left_child] < data_[right_child]) ? right_child : left_child;

        if (temp >= data_[child]) {
            break;
        }

        data_[parent] = data_[child];
        parent = child;
    }
    data_[parent] = temp;
}

void Heap::Sort() {
    for (int i = (data_.size() - 1) / 2; i >= 0; --i) {
        Downheap(i, data_.size() - 1);
    }

    for (int i = data_.size() - 1; i > 0; --i) {
        std::swap(data_[0], data_[i]);
        Downheap(0, i - 1);
    }

    for (const auto elem : data_) {
        std::cout << elem << " ";;
    }

    std::cout << std::endl;
}