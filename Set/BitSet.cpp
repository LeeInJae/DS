//
// Created by cowspirit on 2019-06-16.
//

#include "BitSet.h"
#include <iostream>

int BitSet::SetNo(const int no) {
    return 1 << no;
}

bool BitSet::IsMember(const int n) {
    return bit_ & SetNo(n);
}

void BitSet::Add(const int n) {
    bit_ |= SetNo(n);
}

void BitSet::Remove(const int n) {
    bit_ &= ~SetNo(n);
}

int BitSet::Size() {
    int size = 0;
    int temp = bit_;
    while (temp != 0) {
        temp &= temp - 1;
        ++size;
    }

    return size;
}

bool BitSet::IsEqual(const BitSet &other) {
    return (bit_ == other.bit_);
}

void BitSet::InterSection(const BitSet &other) {
    bit_ &= other.bit_;
}

void BitSet::Union(const BitSet &other) {
    bit_ |= other.bit_;
}

void BitSet::Difference(const BitSet &other) {
    bit_ &= ~other.bit_;
}

void BitSet::Print() {
    for (int i = 0; i < bitSet_; ++i) {
        if (IsMember(i)) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;
}