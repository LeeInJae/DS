//
// Created by cowspirit on 2019-06-11.
//

#ifndef HASH_BUCKET_H
#define HASH_BUCKET_H

#include "Data.h"

class Bucket {
public:
    Bucket() = default;
    Bucket(const Data& data, Bucket* next = nullptr) : data_(data), next_(next) {

    }

    Data data_;
    Bucket* next_ = nullptr;
};



#endif //HASH_BUCKET_H
