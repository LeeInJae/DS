//
// Created by cowspirit on 2019-06-19.
//

#include "Hanoi.h"
#include <iostream>

void Hanoi::move(int n, int x, int y) {
    if (n > 1) {
        move(n - 1, x, 6 - x - y);
    }

    std::cout << n << ":" << x << "->" << y << std::endl;

    if (n > 1) {
        move(n - 1, 6 - x - y, y);
    }
}