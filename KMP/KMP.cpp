//
// Created by cowspirit on 2019-06-13.
//
#include "KMP.h"
#include <iostream>

void KMP::findIndex() {
    int patternIndex = 0;
    const auto skipTable = setSkipTable();
    for (int i = 0; i < text.length(); ++i) {
        while (patternIndex > 0 && text[i] != pattern[patternIndex]) {
            patternIndex = skipTable[patternIndex - 1];
        }

        if (text[i] == pattern[patternIndex]) {
            if (patternIndex == pattern.length() - 1) {
                std::cout << i - pattern.length() + 1 << "  find!!" << std::endl;
                patternIndex = skipTable[patternIndex];
            } else {
                ++patternIndex;
            }
        }
    }
}

std::vector<int> KMP::setSkipTable() {
    int patternIndex = 0;
    std::vector<int> skipTable(pattern.length(), 0);
    for (int i = 1; i < pattern.length(); ++i) {
        while (patternIndex > 0 && pattern[i] != pattern[patternIndex]) {
            patternIndex = skipTable[patternIndex - 1];
        }

        if (pattern[i] == pattern[patternIndex]) {
            skipTable[i] = ++patternIndex;
        }
    }

    for(const auto skipElem : skipTable) {
        std::cout << skipElem << " ";
    }

    std::cout << std::endl;

    return skipTable;
}