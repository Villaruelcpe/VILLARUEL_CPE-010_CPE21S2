#include<iostream>
#include "node.h"

//array sequential search
int linearSearchArray(int arr[], int size, int key) {
    int comparisons = 0;
    for(int i = 0; i < size; i++){
        comparisons++;
        if(arr[i] == key) return comparisons;
    }
    return comparisons;
}

//linked list sequential search 
int linearSearchLinkedList(Node<int>*head, int key) {
    int comparisons = 0;
    while (head != nullptr) {
        comparisons++;
        if(head->data == key) return comparisons;
        head = head->next;
    }
    return comparisons;
}

int main(){
    int dataset[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};
    int key = 18;

    //array search
    int arrComp = linearSearchArray(dataset, 10, key);
    std::cout << "Array comparisons: " << arrComp << std::endl;

    //build linked list loop
    Node<int>* head = new_node(dataset[0]);
    Node<int>* curr = head;
    for (int i = 1; i < 10; i++ ) {
        curr->next = new_node(dataset[i]);
        curr = curr->next;
    }
    //linked list search
    int llcomp = linearSearchLinkedList(head, key);
    std::cout << "Linked List Comparisons: " << llcomp << std::endl;
}