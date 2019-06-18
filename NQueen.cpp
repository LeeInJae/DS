//
// Created by cowspirit on 2019-06-19.
//

#include "NQueen.h"
#include <iostream>
int NQueen::tot = 0;

void NQueen::Print() {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (pos[i] == j) {
                std::cout << "Q" << " ";
            } else {
                std::cout << "#" << " ";
            }
        }
        std::cout << std::endl;
    }
    ++tot;
    std::cout << std::endl;
}

void NQueen::Nqueen(int i) {
    for (int j = 0; j < 8; ++j) {
        if (!flag_a[j] && !flag_b[i + j] && !flag_c[i - j + 7]) {
            pos[i] = j;

            if (i == 7) {
                Print();
            } else {
                flag_a[j] = flag_b[i + j] = flag_c[i - j + 7] = true;
                Nqueen(i + 1);
                flag_a[j] = flag_b[i + j] = flag_c[i - j + 7] = false;
            }
        }
    }
}