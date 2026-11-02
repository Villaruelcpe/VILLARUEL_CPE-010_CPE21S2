#include <iostream>
#include "Traversal.h"

int main() {

    //same tree
    GeneralTree<char>* A = new GeneralTree<char>('A');

    GeneralTree<char>* B = A->insertChild('B');
    A->insertChild('C');
    GeneralTree<char>* D = A->insertChild('D');
    GeneralTree<char>* E = A->insertChild('E');
    GeneralTree<char>* F = A->insertChild('F');
    GeneralTree<char>* G = A->insertChild('G');

    D->insertChild('H');

    E->insertChild('I');
    GeneralTree<char>* J = E->insertChild('J');

    J->insertChild('P');
    J->insertChild('Q');

    F->insertChild('K');
    F->insertChild('L');
    F->insertChild('M');

    G->insertChild('N');

    //running the traversals
    std::cout << "Pre-order: ";
    preOrder(A);
    std::cout << std::endl;

    std::cout << "Post-order: ";
    postOrder(A);
    std::cout << std::endl;

    std::cout << "In-order: ";
    inOrder(A);
    std::cout << std::endl;

    //testing findData
    std::cout << std::endl << "Testing findData:" << std::endl;
    findData(A, std::string("PRE"), 'J');   //should find it
    findData(A, std::string("POST"), 'M');  //should find it
    findData(A, std::string("IN"), 'Z');    //not in the tree, nothing should print

    //adding node O as a child of G then searching for it
    std::cout << std::endl << "Adding node O under G" << std::endl;
    G->insertChild('O');

    std::cout << std::endl << "Running findData for O" << std::endl;
    findData(A, std::string("PRE"), 'O');

    return 0;
}