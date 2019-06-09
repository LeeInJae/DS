//
// Created by cowspirit on 2019-06-09.
//

#include "BST.h"
#include <iostream>

const BSTNode *BST::Search(const int data) {
    if (root == nullptr) {
        return nullptr;
    }

    const BSTNode *node = root;
    while (node != nullptr) {
        if (node->data == data) {
            return node;
        }

        if (node->data < data) {
            node = node->right;
        } else {
            node = node->left;
        }
    }

    return nullptr;
}

void BST::Add(const int data) {
    BSTNode *newNode = new BSTNode;
    newNode->data = data;

    if (root == nullptr) {
        root = newNode;
        return;
    }

    BSTNode *prevNode = nullptr;
    BSTNode *node = root;
    bool dirLeft = true;

    while (node != nullptr) {
        if (node->data == data) {
            std::cout << "this data is duplicate(data = )" << data << std::endl;
            return;
        }

        prevNode = node;
        if (node->data < data) {
            node = node->right;
            dirLeft = false;
        } else {
            node = node->left;
            dirLeft = true;
        }
    }

    (dirLeft) ? prevNode->left = newNode : prevNode->right = newNode;
}

void BST::Remove(const int data) {
    if (root == nullptr) {
        return;
    }

    BSTNode** deleteNode = &root;

    while (1) {
        if (*deleteNode == nullptr) {
            std::cout << "data is not in BST" << std::endl;
            return;
        }

        if ((*deleteNode)->data == data) {
            break;
        }

        if ((*deleteNode)->data < data) {
            deleteNode = &((*deleteNode)->right);
        } else {
            deleteNode = &((*deleteNode)->left);
        }
    }

    BSTNode* next = nullptr;
    BSTNode** left = nullptr;
    if ((*deleteNode)->left == nullptr) {
        next = (*deleteNode)->right;
    } else {
        left = &((*deleteNode)->left);
        while((*left)->right != nullptr) {
            left = &(*left)->right;
        }

        next = *left;
        *left = (*left)->left;

        next->left = (*deleteNode)->left;
        next->right = (*deleteNode)->right;
    }
    BSTNode* temp = *deleteNode;
    (*deleteNode) = next;
    delete temp;
}

void BST::PrintAll()
{
    Print(this->root);
    std::cout << std::endl;
}

void BST::Print(BSTNode* node) {
    if (node == nullptr) {
        return;
    }

    Print(node->left);
    std::cout << node->data << "(" << node << ")" << " ";
    Print(node->right);
}

void BST::FreeTree(BSTNode* node) {
    if (node == nullptr) {
        return;
    }

    FreeTree(node->right);
    FreeTree(node->left);
    delete node;
}