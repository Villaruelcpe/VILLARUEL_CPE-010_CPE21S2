#ifndef BST_H
#define BST_H

#include <iostream>

template <typename T>
class BinarySearchTree {
private:
    // create a key
    T key;
    // pointers for left and right
    BinarySearchTree<T>* left;
    BinarySearchTree<T>* right;

public:
    // constructor
    BinarySearchTree(T value);

    // insert left and right
    void insert(T value);

    // traversing
    void preOrder();
    void inOrder();
    void postOrder();

    // searching
};

template <typename T>
BinarySearchTree<T>::BinarySearchTree(T value) {
    key = value;
    left = nullptr;
    right = nullptr;
}

template <typename T>
void BinarySearchTree<T>::insert(T value) {
    // go left 
    if (value < key) {
        if (left == nullptr) {
            left = new BinarySearchTree<T>(value);
        } else {
            left->insert(value);
        }
    } else if (value > key) {
        if (right == nullptr) {
            right = new BinarySearchTree<T>(value);
        } else {
            right->insert(value);
        }
    }
}

template <typename T>
void BinarySearchTree<T>::preOrder() {
    std::cout << key << " ";
    if (left != nullptr) {
        left->preOrder();
    }
    if (right != nullptr) {
        right->preOrder();
    }
}

template <typename T>
void BinarySearchTree<T>::inOrder(){
    //left
    if (left != nullptr) {
        left->inOrder();
    }
    std::cout << key << " ";
    //right
    if (right != nullptr) {
        right->inOrder();
    }
}

template <typename T>
void BinarySearchTree<T>::postOrder(){
   //left
    if (left != nullptr) {
        left->postOrder();
    }
    //right
    if (right != nullptr) {
        right->postOrder();
    }
    std::cout << key << " ";
}
#endif