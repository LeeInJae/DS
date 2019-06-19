//
// Created by cowspirit on 2019-06-20.
//

#include "SelectionSort.h"
#include <iostream>

void SelectionSort::Sort() {
    for (int i = 0; i < data_.size(); ++i) {
        int min = i;
        for (int j = i + 1; j < data_.size(); ++j) {
            if (data_[min] > data_[j]) {
                min = j;
            }
        }
        std::swap(data_[min], data_[i]);
    }

    for(const auto elem : data_) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}