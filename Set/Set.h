//
// Created by cowspirit on 2019-06-16.
//

#ifndef ALGORITHM_SET_H
#define ALGORITHM_SET_H


class Set {
public:
    Set(const int max) : max_(max), num_(0) {
        data_ = new int[max_];
    }

    ~Set() {
        delete[] data_;
        max_ = 0;
        num_ = 0;
    }

    int IsMember(const int n) const;

    void Add(const int n);

    void Remove(const int n);

    int Capacity() const;

    int Size() const;

    void Assign(const Set &other);

    bool Equal(const Set &other) const;

    void Union(const Set &other);

    void Intersection(const Set &other);

    void Difference(const Set &other);

    void Print() const;

private:
    int max_;
    int num_;
    int *data_;
};


#endif //ALGORITHM_SET_H
