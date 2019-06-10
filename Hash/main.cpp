#include <iostream>
#include "ChainHash.h"

int main() {
    ChainHash* hash = new ChainHash(13);

    hash->Add(Data(14));
    hash->Add(Data(29));
    hash->Add(Data(17));
    hash->Add(Data(69));
    hash->Add(Data(5));
    hash->Add(Data(6));
    hash->Add(Data(33));
    hash->Add(Data(20));

    hash->Dump();
    std::cout << std::endl;
    hash->Remove(Data(69));
    hash->Dump();
    std::cout << std::endl;
    hash->Remove(Data(14));
    hash->Dump();
    std::cout << std::endl;
    hash->Remove(Data(14));
    hash->Dump();
    std::cout << std::endl;

    delete hash;
    return 0;
}