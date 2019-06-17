//
// Created by cowspirit on 2019-06-18.
//

#ifndef ALGORITHM_EUCLIDEANMETHOD_H
#define ALGORITHM_EUCLIDEANMETHOD_H

#include <iostream>

class EuclideanMethod {
public:
    EuclideanMethod(const int m, const int n) : m_(m), n_(n) {
        if (m_ > n_) {
            std::swap(m_, n_);
        }
    }

    int getGCD();
    int gcd(int x, int y);

private:
    int m_, n_;
};


#endif //ALGORITHM_EUCLIDEANMETHOD_H
