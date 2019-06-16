//
// Created by cowspirit on 2019-06-16.
//

#ifndef ALGORITHM_BITSET_H
#define ALGORITHM_BITSET_H


class BitSet {
public:
    BitSet() : bit_(0) {
    }

    int SetNo(const int no);

    bool IsMember(const int n);

    void Add(const int n);

    void Remove(const int n);

    int Size();

    void Print();

    bool IsEqual(const BitSet &other);

    void InterSection(const BitSet &other);

    void Union(const BitSet &other);

    void Difference(const BitSet &other);
private:
    int unsigned long bit_;
    int bitSet_ = 32;
};


#endif //ALGORITHM_BITSET_H
