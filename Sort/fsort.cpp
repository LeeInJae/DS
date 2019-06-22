//
// Created by cowspirit on 2019-06-23.
//

#include "fsort.h"
#include <iostream>

void Fsort::Sort(int max) {
    std::vector<int> f(max + 1, 0);
    std::vector<int> result(data_.size(), 0);

    for (int i = 0; i < data_.size(); ++i) {
        ++f[data_[i]];
    }

    for (int i = 1; i <= max; ++i) {
        f[i] += f[i - 1];
    }

    for (int i = data_.size() - 1; i >= 0; --i) {
        result[--f[data_[i]]] = data_[i];
    }


    data_ = std::move(result);

    for (const auto elem : data_) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}