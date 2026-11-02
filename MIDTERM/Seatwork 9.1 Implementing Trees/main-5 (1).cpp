#include <iostream>
#include "binaryTree.h"

main(){

    
    //creating the root node:
    BinaryTree<char>* root = new BinaryTree<char>('P');

    //creating a child of root node P:
    root->insertLeftChild('R');
    root->insertRightChild('I');

    //insert a child to node R
    root->getLeftChild()->insertLeftChild('N');
    root->getLeftChild()->insertRightChild('C');

    //insert a child to node I
    root->getRightChild()->insertLeftChild('E');

    //print the root node:
    std::cout << "Root: " << root->getRootVal() << std::endl;
    
    //children of the root node
    std::cout << "root left child: " << root->getLeftChild()->getRootVal() << std::endl;
    std::cout << "root right child: " << root->getRightChild()->getRootVal() << std::endl;

    // children of the sub trees R and I

    std::cout << "node R left child: " << root->getLeftChild()->getLeftChild()->getRootVal() << std::endl;
    std::cout << "node R right child: " << root->getLeftChild()->getRightChild()->getRootVal() << std::endl;

    root->getLeftChild()->getRightChild()->setRootVal('E');
    std::cout << "node R right child: " << root->getLeftChild()->getRightChild()->getRootVal() << std::endl;

    return 0;

}