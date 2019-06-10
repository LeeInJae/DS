//
// Created by cowspirit on 2019-06-11.
//

#ifndef HASH_DATA_H
#define HASH_DATA_H

#include <string>
#include <iostream>

class Data {
public:
    Data() = default;
    Data(const int key) : key_(key) {
    }
    Data(const int key, const std::string& name) : key_(key), name_(name) {
    }

    void Print() {
        std::cout << "key : " << key_ << " , " << "name : " << name_ << std::endl;
    }

    int GetKey() const { return key_; }
    std::string GetName() const { return name_; }
private:
    int key_;
    std::string name_;
};


#endif //HASH_DATA_H
