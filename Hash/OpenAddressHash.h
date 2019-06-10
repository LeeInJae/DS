//
// Created by cowspirit on 2019-06-11.
//

#ifndef ALGORITHM_OPENADDRESSHASH_H
#define ALGORITHM_OPENADDRESSHASH_H

#include "Data.h"

enum class Status : int {
    Occupied = 1,
    Empty = 2,
    Deleted = 3
};

class OpenAddressBucket {
public:
    OpenAddressBucket() = default;

    OpenAddressBucket(const Data &data) : data_(data) {

    }

    Data data_;
    Status status_;
};

class OpenAddressHash {
public:
    OpenAddressHash(const int bucketSize) : bucketSize_(bucketSize) {
        table_ = new OpenAddressBucket[bucketSize];
        for (int i = 0; i < bucketSize_; ++i) {
            table_[i].status_ = Status::Empty;
        }
    }

    ~OpenAddressHash() {
        delete[] table_;
    }

    OpenAddressBucket *Search(const Data &data);

    void Add(const Data &data);

    void Remove(const Data &data);

    void Dump();

    void Clear();

private:
    int Hash(const int key);
    int ReHash(const int key);
    OpenAddressBucket *table_ = nullptr;
    int bucketSize_ = 0;
};


#endif //ALGORITHM_OPENADDRESSHASH_H
