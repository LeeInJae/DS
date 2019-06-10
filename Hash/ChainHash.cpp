//
// Created by cowspirit on 2019-06-11.
//

#include "ChainHash.h"

int ChainHash::Hash(const int key) {
    return (key % bucketSize_);
}

Bucket *ChainHash::Search(const int key) {
    const int hashKey = Hash(key);
    Bucket* bucket = table[hashKey];

    while(bucket != nullptr) {
        if (bucket->data_.GetKey() == key) {
            return bucket;
        }

        bucket = bucket->next_;
    }

    return nullptr;
}

void ChainHash::Add(const Data &data) {
    const int hashKey = Hash(data.GetKey());
    Bucket *curBucket = table[hashKey];
    while (curBucket != nullptr) {
        if (curBucket->data_.GetKey() == data.GetKey()) {
            std::cout << "data's key is already in Hash" << std::endl;
            return;
        }
        curBucket = curBucket->next_;
    }

    Bucket *newBucket = new Bucket(data);
    newBucket->next_ = table[hashKey];
    table[hashKey] = newBucket;
}

void ChainHash::Remove(const Data &data) {
    const int hashKey = Hash(data.GetKey());
    Bucket *curBucket = table[hashKey];
    Bucket **curBucketAdd = &(table[hashKey]);
    while (curBucket != nullptr) {
        if (curBucket->data_.GetKey() == data.GetKey()) {
            *curBucketAdd = curBucket->next_;
            delete curBucket;

            std::cout << "remove is success" << std::endl;
            return;
        }

        curBucket = curBucket->next_;
        curBucketAdd = &(curBucket);
    }
}

void ChainHash::Dump() {
    for (int i = 0; i < bucketSize_; ++i) {
        Bucket *bucket = table[i];
        std::cout << "bucket(" << i << "): ";
        while (bucket != nullptr) {
            std::cout << "->" << bucket->data_.GetKey() << " ";
            bucket = bucket->next_;
        }
        std::cout << std::endl;
    }
}

void ChainHash::Clear() {
    for (int i = 0; i < bucketSize_; ++i) {
        Bucket *bucket = table[i];
        while (bucket != nullptr) {
            Bucket *next = bucket->next_;
            delete bucket;
            std::cout << "remove()" <<std::endl;
            bucket = next;
        }
        table[i] = nullptr;
    }

    bucketSize_ = 0;
}