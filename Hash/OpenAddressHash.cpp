//
// Created by cowspirit on 2019-06-11.
//

#include "OpenAddressHash.h"

int OpenAddressHash::Hash(const int key) {
    return key % bucketSize_;
}

int OpenAddressHash::ReHash(const int key) {
    return (key + 1) % bucketSize_;
}

OpenAddressBucket *OpenAddressHash::Search(const Data &data) {
    int key = Hash(data.GetKey());
    OpenAddressBucket *bucket = &(table_[key]);
    for (int i = 0; i < bucketSize_; ++i) {
        if (bucket->status_ == Status::Occupied && bucket->data_.GetKey() == data.GetKey()) {
            return bucket;
        }
        if (bucket->status_ == Status::Empty) {
            return nullptr;
        }
        key = ReHash(key);
        bucket = &(table_[key]);
    }

    return nullptr;
}

void OpenAddressHash::Add(const Data &data) {
    int key = Hash(data.GetKey());
    OpenAddressBucket *bucket = &(table_[key]);
    if (Search(data.GetKey())) {
        std::cout << "Data is already in Hash" << std::endl;
        return;
    }

    for (int i = 0; i < bucketSize_; ++i) {
        if (bucket->status_ == Status::Empty || bucket->status_ == Status::Deleted) {
            bucket->data_ = data;
            bucket->status_ = Status::Occupied;
            return;
        }

        key = ReHash(key);
        bucket = &(table_[key]);
    }

    std::cout << "hash is full" << std::endl;
}

void OpenAddressHash::Remove(const Data &data) {
    OpenAddressBucket *bucket = Search(data);
    if (bucket == nullptr) {
        return;
    }

    bucket->status_ = Status::Deleted;
}

void OpenAddressHash::Dump() {
    std::cout << "| ";
    for (int i = 0; i < bucketSize_; ++i) {
        switch (table_[i].status_) {
            case Status::Occupied:
                std::cout << table_[i].data_.GetKey() << "| ";
                break;

            case Status::Deleted:
                std::cout << "x" << "| ";
                break;

            case Status::Empty:
                std::cout << "-" << "| ";
                break;

            default:
                break;
        }
    }
    std::cout << std::endl;
}

void OpenAddressHash::Clear() {
    for (int i = 0; i < bucketSize_; ++i) {
        table_[i].status_ = Status::Empty;
    }
}