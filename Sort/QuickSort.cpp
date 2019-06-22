//
// Created by cowspirit on 2019-06-22.
//

#include "QuickSort.h"
#include <iostream>

void QuickSort::Quick()
{
    Sort(0, data_.size() - 1);
    Print();
}
void QuickSort::Sort(int left, int right) {
    int pl = left;
    int pr = right;
    int pivot = data_[(pl + pr) / 2];

    while (pl <= pr) {
        while (data_[pl] < pivot) {
            ++pl;
        }

        while (data_[pr] > pivot) {
            --pr;
        }

        if (pl <= pr) {
            std::swap(data_[pl], data_[pr]);
            ++pl;
            --pr;
        }
    }

    if (left < pr) {
        Sort(left, pr);
    }

    if (pl < right) {
        Sort(pl, right);
    }
}

void QuickSort::Print()
{
    for(const auto elem : data_) {
        std::cout << elem << " ";
    }

    std::cout << std::endl;
}