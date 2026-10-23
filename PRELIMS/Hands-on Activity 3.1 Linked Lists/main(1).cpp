#include <iostream>
#include "singly_ll.h"  

int main(){

    //creation of nodes "PBSV"
    //creating a node stored in the stack
    SingleList<char>* head = nullptr;
    SingleList<char>* second = nullptr;
    SingleList<char>* third = nullptr;
    SingleList<char>* fourth = nullptr;

    //allocates memory in the heap
    head = new SingleList<char>;
    second = new SingleList<char>;
    third = new SingleList<char>;
    fourth = new SingleList<char>;

    //storing a value inside the node
    head->data = 'P';
    second->data = 'B';
    third->data = 'S';
    fourth->data = 'V';

    //linking the nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr;

    std::cout<< "Testing of traversal: ";
    ListTraversal(head);
    
    std::cout<<"Testing of sllinsertHead: \n";
    sllinsertHead('Q', &head);
    ListTraversal(head);

    std::cout<<"Testing of sllGeneralInsert:\n";
    sllGeneralInsert('E', head->next->next);
    ListTraversal(head);

    std::cout<<"Testing of sllinsertEnd:\n";
    sllinsertEnd('C', &head);
    ListTraversal(head);

    std::cout<<"Testing of deleting the node:\n";
    sllDeleteNode('C', &head);
    ListTraversal(head);
    sllDeleteNode('E', &head);
    ListTraversal(head);

    std::cout<<"deleting ALL nodes:\n";
    sllDeleteList(&head);
    ListTraversal(head);

    return 0;
    
}
