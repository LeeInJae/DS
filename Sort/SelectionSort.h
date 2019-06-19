//
// Created by cowspirit on 2019-06-20.
//

#ifndef ALGORITHM_SELECTIONSORT_H
#define ALGORITHM_SELECTIONSORT_H

#include <vector>

class SelectionSort {
public:
    SelectionSort(std::vector<int>&& data) : data_(std::move(data)) {
    }

    void Sort();

private:
    std::vector<int> data_;
};


#endif //ALGORITHM_SELECTIONSORT_H
