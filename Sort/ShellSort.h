//
// Created by cowspirit on 2019-06-22.
//

#ifndef ALGORITHM_SHELLSORT_H
#define ALGORITHM_SHELLSORT_H

#include <vector>

class ShellSort {
public:
    ShellSort(std::vector<int>&& data)  : data_(std::move(data)) {
    }

    void Sort();

private:
    std::vector<int> data_;
};


#endif //ALGORITHM_SHELLSORT_H
