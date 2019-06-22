//
// Created by cowspirit on 2019-06-22.
//

#include "ShellSort.h"
#include <iostream>

void ShellSort::Sort() {
    const int shell = data_.size();
    for (int h = shell; h > 0; h /= 2) {
        for (int i = h; i < data_.size(); ++i) {
            const int temp = data_[i];
            int swap_index = i;
            for (int j = i - h; j >= 0; j -= h) {
                if (data_[j] > temp) {
                    data_[j + h] = data_[j];
                    swap_index = j;
                }
            }
            data_[swap_index] = temp;
        }
    }

    for(const auto elem : data_){
        std::cout << elem << " " << std::endl;
    }
}