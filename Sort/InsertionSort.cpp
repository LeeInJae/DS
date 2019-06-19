//
// Created by cowspirit on 2019-06-20.
//

#include "InsertionSort.h"
#include <iostream>

void InsertionSort::Sort() {
    for (int i = 1; i < data_.size(); ++i) {
        const int temp = data_[i];
        int insert_index = i;
        for (int j = i; j > 0; --j) {
            if (temp < data_[j - 1]) {
                data_[j] = data_[j - 1];
                insert_index = j - 1;
            }
        }

        data_[insert_index] = temp;
    }

    for (const auto elem : data_) {
        std::cout << elem << " ";
    }

    std::cout << std::endl;
}