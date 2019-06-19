//
// Created by cowspirit on 2019-06-20.
//

#ifndef ALGORITHM_BUBBLESORT_H
#define ALGORITHM_BUBBLESORT_H
#include <vector>
#include <iostream>

class BubbleSort {
public:
    BubbleSort(std::vector<int>&& data) : data_(std::move(data)) {

    }

    void Sort();
    void Sort2();
    void Print();
private:
    std::vector<int> data_;
};


#endif //ALGORITHM_BUBBLESORT_H
