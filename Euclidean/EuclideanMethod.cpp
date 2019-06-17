//
// Created by cowspirit on 2019-06-18.
//

#include "EuclideanMethod.h"
#include <iostream>

int EuclideanMethod::gcd(int x, int y) {
    if (y == 0) {
        return x;
    }

    return gcd(y, x % y);
}

int EuclideanMethod::getGCD() {
    return gcd(m_, n_);
}