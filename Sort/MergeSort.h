//
// Created by cowspirit on 2019-06-22.
//

#ifndef ALGORITHM_MERGESORT_H
#define ALGORITHM_MERGESORT_H

#include <vector>

class MergeSort {
public:
    MergeSort(std::vector<int>&& data) : data_(data) {

    }

    void Sort();
    void DoMergeSort(int left, int right, std::vector<int>& temp);
private:
    std::vector<int> data_;
};


#endif //ALGORITHM_MERGESORT_H
