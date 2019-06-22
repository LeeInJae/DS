//
// Created by cowspirit on 2019-06-22.
//

#include "MergeSort.h"
#include <array>
#include <iostream>
void MergeSort::Sort() {
    std::vector<int> temp(data_.size(), 0);
    DoMergeSort(0, data_.size() - 1, temp);

    for(const auto elem : data_) {
        std::cout << elem << " ";
    }

    std::cout << std::endl;
}

void MergeSort::DoMergeSort(int left, int right, std::vector<int> &temp) {
    if (left >= right) {
        return;
    }

    int mid = (left + right) / 2;

    DoMergeSort(left, mid, temp);
    DoMergeSort(mid + 1, right, temp);

    for (int i = left; i <= right; ++i) {
        temp[i] = data_[i];
    }

    int arr1_index = left;
    int arr2_index = mid + 1;
    for (int i = left; i <= right; ++i) {
        if (arr1_index > mid) {
            data_[i] = temp[arr2_index++];
            continue;
        } else if(arr2_index > right) {
            data_[i] = temp[arr1_index++];
            continue;
        }

        if (temp[arr1_index] < temp[arr2_index]) {
            data_[i] = temp[arr1_index++];
        } else if(temp[arr1_index] > temp[arr2_index]) {
            data_[i] = temp[arr2_index++];
        } else {
            //stable
            data_[i] = temp[arr1_index++];
        }
    }
}