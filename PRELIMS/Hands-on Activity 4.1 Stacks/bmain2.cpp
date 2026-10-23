#include<iostream>
#include "stack_ll.h"

int main(){

    std::cout<< "PUSHING 'c' 'p' 'e' ONTO THE STACK\n";
    //push
    push('c');
    push('p');
    push('e');

    //display the current top
    Top<char>(); 
    displayALL<char>();
    std::cout<<"Popping all the elements\n";

    while(!isEmpty<char>()){
        std::cout<<" Popped: "<< pop<char>() <<std::endl;
    }

    std::cout<<"Testing the Underflow\n";
    pop<char>();

    return 0;
}