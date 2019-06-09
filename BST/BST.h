//
// Created by cowspirit on 2019-06-09.
//

#ifndef ALGORITHM_BST_H
#define ALGORITHM_BST_H

#include "BSTNode.h"

class BST {
public:
    BST() = default;

    const BSTNode* Search(const int data);
    void Add(const int data);
    void Remove(const int data);
    void PrintAll();
    void Print(BSTNode* node);
    void FreeTree(BSTNode* node);
private:
    BSTNode* root = nullptr;
};


#endif //ALGORITHM_BST_H
