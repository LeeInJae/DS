//
// Created by cowspirit on 2019-06-11.
//

#ifndef HASH_CHAINHASH_H
#define HASH_CHAINHASH_H

#include "Bucket.h"

class ChainHash {
public:
    ChainHash(const int size) : bucketSize_(size) {
        table = new Bucket *[bucketSize_];
        for (int i = 0; i < bucketSize_; ++i) {
            table[i] = nullptr;
        }
    }

    ~ChainHash() {
        Clear();
        delete[] table;
    }

    Bucket *Search(const int key);

    void Add(const Data &data);

    void Remove(const Data &data);

    void Dump();

    void Clear();

private:
    int Hash(const int key);

    Bucket **table;
    int bucketSize_ = 0;


};


#endif //HASH_CHAINHASH_H
