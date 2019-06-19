//
// Created by cowspirit on 2019-06-20.
//

#ifndef ALGORITHM_INSERTIONSORT_H
#define ALGORITHM_INSERTIONSORT_H

#include <vector>

class InsertionSort {
public:
    InsertionSort(std::vector<int>&& data) : data_(data) {

    }

    void Sort();
private:
    std::vector<int> data_;
};


#endif //ALGORITHM_INSERTIONSORT_H
