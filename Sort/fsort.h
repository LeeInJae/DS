//
// Created by cowspirit on 2019-06-23.
//

#ifndef ALGORITHM_FSORT_H
#define ALGORITHM_FSORT_H
#include <vector>

class Fsort {
public:
    Fsort(std::vector<int>&& data) : data_(data) {
    }

    void Sort(int max);

private:
    std::vector<int> data_;
};


#endif //ALGORITHM_FSORT_H
