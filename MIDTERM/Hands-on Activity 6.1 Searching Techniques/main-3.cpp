#include <iostream>
#include <cstdlib> //for generating random integers
#include <time.h> //will be used for our seeding function
#include "searchingAlgo.h"
#include "node.h"

const int max_size = 50;

int main(){
    //int dataset[max_size];
    //srand(time(0));
    //for(int i = 0; i < max_size; i++){
        //dataset[i] = rand();
        //std::cout << dataset[i] << " ";
    //}
    //std::cout << std::endl;

    //std::cout << "What number to find: ";
    //int choice;

    //std::cin >> choice;

    //linearSearchAR(max_size, 10, dataset);

    //create a node for your name
    //[P]->[R]->[I]->[N]->[C]->[E]->NULL

    //create a node 
    // Node<char> *name1 = new_node('P');
    // Node<char> *name2 = new_node('R');
    // Node<char> *name3 = new_node('I');
    // Node<char> *name4 = new_node('N');
    // Node<char> *name5 = new_node('C');
    // Node<char> *name6 = new_node('E');

    // name1->next = name2;
    // name2->next = name3;
    // name3->next = name4;
    // name4->next = name5;
    // name5->next = name6;
    // name6->next = nullptr;

    // linearSearchLL(name1, 'P');
    
    //generate a sorted array: (use for loop)
    // int newArr[10] = {1,2,3,4,5,6,7,8,9,10};

    // for (int i = 0; i < max_size; i++ ){
    //     newArr[i] = i;
    // }

    // binarySearchArr(newArr, max_size, 100);
    
    Node<int> *char1 = new_node(10);
    Node<int> *char2 = new_node(11);
    Node<int> *char3 = new_node(12);
    Node<int> *char4 = new_node(13);
    Node<int> *char5 = new_node(14);
    Node<int> *char6 = new_node(15);
    Node<int> *char7 = new_node(16);

    // Connect the nodes
    char1->next = char2;
    char2->next = char3;
    char3->next = char4;
    char4->next = char5;
    char5->next = char6;
    char6->next = char7;
    char7->next = nullptr;  

    binarySearchLL(char1, 18);

    return 0;
}