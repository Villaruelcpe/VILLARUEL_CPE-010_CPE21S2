#include <iostream>
#include "balance_checker_ll.h"

int main(){
    std::string testCases[] = {
        "(A+B)+(C-D)",
        "((A+B)+(C-D)",
        "((A+B)+[C-D])",
        "((A+B]+[C-D])"
    };

    std::cout <<"Balance Checker (Linked List): "<<std::endl;
    for(const std::string &expr : testCases){
        std::cout << "Expression: " << expr << " -> "
            << (isBalancedLinkedList(expr) ? "Valid (Y)" : "Invalid (N)")<<std::endl;
    }
    return 0;
}