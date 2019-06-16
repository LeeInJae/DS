//
// Created by cowspirit on 2019-06-16.
//

#include "Set.h"
#include <iostream>

int Set::IsMember(const int n) const {
    for (int i = 0; i < num_; ++i) {
        if (data_[i] == n) {
            return i;
        }
    }

    return -1;
}

void Set::Add(const int n) {
    if (num_ >= max_ ) {
        return;
    }

    if (IsMember(n) != -1) {
        return;
    }

    data_[num_++] = n;
}

void Set::Remove(const int n) {
    const int index = IsMember(n);
    if (index != -1) {
        data_[index] = data_[--num_];
    }
}

int Set::Capacity() const {
    return max_;
}

int Set::Size() const {
    return num_;
}

void Set::Assign(const Set &other) {
    const int n = (max_ < other.num_) ? max_ : other.num_;

    for (int i = 0; i < n; ++i) {
        data_[i] = other.data_[i];
    }

    num_ = n;
}

bool Set::Equal(const Set &other) const {
    if (num_ != other.num_) {
        return false;
    }

    for (int i = 0; i < num_; ++i) {
        if (other.IsMember(data_[i]) == -1) {
            return false;
        }
    }

    return true;
}

void Set::Union(const Set &other) {
    for (int i = 0; i < other.num_; ++i) {
        Add(other.data_[i]);
    }
}

void Set::Intersection(const Set &other) {
    int temp[num_];
    int temp_num = 0;
    for (int i = 0; i < other.num_; ++i) {
        if (IsMember(other.data_[i]) != -1) {
            temp[temp_num++] = other.data_[i];
        }
    }

    num_ = 0;
    for (int i = 0; i < temp_num; ++i) {
        Add(temp[i]);
    }
}

void Set::Difference(const Set &other) {
    int temp[num_];
    int temp_num = 0;
    for (int i = 0; i < other.num_; ++i) {
        if (IsMember(other.data_[i]) == -1) {
            temp[temp_num++] = other.data_[i];
        }
    }

    num_ = num_ - temp_num;
    for (int i = 0; i < temp_num; ++i) {
        Remove(temp[i]);
    }
}

void Set::Print() const {
    std::cout << "{ ";
    for (int i = 0; i < num_; ++i) {
        std::cout << data_[i] << " ";
    }
    std::cout << "}" << std::endl;
}