//
// Created by cowspirit on 2019-06-20.
//

#include "BubbleSort.h"

void BubbleSort::Sort() {
    for (int i = 0; i < data_.size() - 1; ++i) {
        int exchange_count = 0;
        for (int j = data_.size() - 1; j > i; --j) {
            if (data_[j - 1] > data_[j]) {
                std::swap(data_[j - 1], data_[j]);
                ++exchange_count;
            }
        }

        if (!exchange_count) {
            break;
        }
    }

    Print();
}


void BubbleSort::Sort2() {
    int passCount = 0;
    int forward_index = 0;
    int backword_index = data_.size() - 1;
    while (forward_index != backword_index) {
        if (passCount % 2 == 0) {
            int last_swap_index = backword_index;
            for (int j = backword_index; j > forward_index; --j) {
                if (data_[j - 1] > data_[j]) {
                    std::swap(data_[j - 1], data_[j]);
                    last_swap_index = j;
                }
            }
            forward_index = last_swap_index;
        } else {
            int last_swap_index = forward_index;
            for (int j = forward_index; j < backword_index; ++j) {
                if (data_[j] > data_[j + 1]) {
                    std::swap(data_[j], data_[j + 1]);
                    last_swap_index = j;
                }
            }
            backword_index = last_swap_index;
        }

        ++passCount;
    }

    Print();
}

void BubbleSort::Print() {
    for (const auto elem : data_) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}