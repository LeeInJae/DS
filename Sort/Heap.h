//
// Created by cowspirit on 2019-06-23.
//

#ifndef ALGORITHM_HEAP_H
#define ALGORITHM_HEAP_H

#include <vector>

class Heap {
public:
    Heap(std::vector<int>&& data) : data_(data) {
    }

    void Downheap(int left, int right);
    void Sort();

private:
    std::vector<int> data_;
};


#endif //ALGORITHM_HEAP_H
