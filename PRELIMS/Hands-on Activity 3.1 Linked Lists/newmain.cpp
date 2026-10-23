#include <iostream>
#include "singly_ll.h"  

int main(){
    SingleList<char>* head = nullptr;
    SingleList<char>* second = nullptr;
    SingleList<char>* third = nullptr;
    SingleList<char>* fourth = nullptr;
    SingleList<char>* fifth = nullptr;
    SingleList<char>* sixth = nullptr;

    head = new SingleList<char>;
    second = new SingleList<char>;
    third = new SingleList<char>;
    fourth = new SingleList<char>;
    fifth = new SingleList<char>;
    sixth = new SingleList<char>;

    head->data = 'C';
    second->data = 'P';
    third->data = 'E';
    fourth->data = '1';
    fifth->data = '0';
    sixth->data = '1';

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = nullptr;

    std::cout<< "Testing of traversal: ";
    ListTraversal(head);

    std::cout<<"Testing of sllinsertHead: \n";
    sllinsertHead('G', &head);
    ListTraversal(head);

    std::cout<<"Testing of sllGeneralInsert:\n";
    sllGeneralInsert('E', head->next->next);
    ListTraversal(head);

    std::cout<<"Testing of deleting the node:\n";
    sllDeleteNode('C', &head);
    ListTraversal(head);
    sllDeleteNode('P', &head);
    ListTraversal(head);

    std::cout<<"Final:\n";
    ListTraversal(head);

    return 0;
}