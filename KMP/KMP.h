//
// Created by cowspirit on 2019-06-13.
//

#ifndef ALGORITHM_KMP_H
#define ALGORITHM_KMP_H

#include <string>
#include <vector>

class KMP {
public:
    KMP() = default;
    KMP(std::string&& text_, std::string&& pattern_) : text(std::move(text_)), pattern(std::move(pattern_)){
    }

    void findIndex();
    std::vector<int> setSkipTable();
private:
    std::string text;
    std::string pattern;
};
#endif //ALGORITHM_KMP_H
