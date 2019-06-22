//
// Created by cowspirit on 2019-06-22.
//

#ifndef ALGORITHM_QUICKSORT_H
#define ALGORITHM_QUICKSORT_H

#include <vector>

class QuickSort {
public:
    QuickSort(std::vector<int>&& data) : data_(std::move(data)) {

    }
    void Quick();
    void Print();
private:
    void Sort(int left, int right);

private:
    std::vector<int> data_;
};


#endif //ALGORITHM_QUICKSORT_H
