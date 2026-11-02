#include <iostream>
#include "GeneralTree.h"
 
int main() {
    //creating a root node
    GeneralTree<char>* A = new GeneralTree<char>('A');

    //creating children A 
    GeneralTree<char>* B = A->insertChild('B');
    GeneralTree<char>* C = A->insertChild('C');
    GeneralTree<char>* D = A->insertChild('D');
    GeneralTree<char>* E = A->insertChild('E');
    GeneralTree<char>* F = A->insertChild('F');
    GeneralTree<char>* G = A->insertChild('G');

    //insert child to node D
    GeneralTree<char>* H = D->insertChild('H');

    //insert child to node E
    GeneralTree<char>* I = E->insertChild('I');
    GeneralTree<char>* J = E->insertChild('J');

    //insert child to node j
    GeneralTree<char>* P = J->insertChild('P');
    GeneralTree<char>* Q = J->insertChild('Q');

    //insert child to node F
    GeneralTree<char>* K = F->insertChild('K');
    GeneralTree<char>* L = F->insertChild('L');
    GeneralTree<char>* M = F->insertChild('M');

    //insert child to node G
    GeneralTree<char>* N = G->insertChild('N');
}
 
