//
// Created by cowspirit on 2019-06-14.
//

#include "BoyerMoore.h"
#include <iostream>

std::vector<int> BoyerMoore::GetMatchingIndexes() {
    int skip[UCHAR_MAX + 1];
    for (int i = 0; i <= UCHAR_MAX; ++i) {
        skip[i] = pattern.length();
    }

    for (int i = 0; i < pattern.length(); ++i) {
        skip[pattern[i]] = pattern.length() - i - 1;
    }

    std::vector<int> result;

    int text_index = pattern.length() - 1;
    int pattern_index = 0;
    while (text_index < text.length()) {
        pattern_index = pattern.length() - 1;
        while (text[text_index] == pattern[pattern_index]) {
            if (pattern_index == 0) {
                //find
                std::cout << "text_index : " << text_index << std::endl;
                text_index += pattern.length() - 1;

                break;
            }

            --pattern_index;
            --text_index;
        }

        text_index += (skip[text[text_index]] > pattern.length() - pattern_index) ? skip[text[text_index]] : pattern.length() - pattern_index;
    }

    return result;
}