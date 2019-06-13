//
// Created by cowspirit on 2019-06-14.
//

#ifndef ALGORITHM_BOYERMOORE_H
#define ALGORITHM_BOYERMOORE_H

#include <string>
#include <vector>

class BoyerMoore {
public:
    BoyerMoore() = default;
    BoyerMoore(const std::string&& text_, const std::string&& pattern_) : text(text_), pattern(pattern_) {
    }
    std::vector<int> GetMatchingIndexes();
private:
    std::string text;
    std::string pattern;
};


#endif //ALGORITHM_BOYERMOORE_H
