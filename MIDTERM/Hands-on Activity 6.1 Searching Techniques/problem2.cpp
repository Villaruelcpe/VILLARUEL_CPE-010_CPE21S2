#include<iostream>
#include "node.h"

//count occurrences in array
int countOccurrenceArray(int arr[], int size, int key) {
    int count = 0;
    for(int i = 0; i < size; i++ ){
        if (arr[i] == key){
            count++;
        }
    }
    return count;
}
//count occurrence in linked list
int countOccurrenceLL(Node<int>*head, int key) {
    int count = 0;
    while (head != nullptr) {
        if (head->data == key){
            count++;
        }
        head = head->next;
    }
    return count;
}
int main() {
    int dataset[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};
    int size = 10;
    int k = 18;
    //array count
    int arrCount = countOccurrenceArray(dataset, size, k);
    std::cout<<"Array occurrences of "<< k << ": "<< arrCount << std::endl;

Node<int>* head = new_node(dataset[0]);
    Node<int>* curr = head;
    for (int i = 1; i < 10; i++ ) {
        curr->next = new_node(dataset[i]);
        curr = curr->next;
    }

int llcount = countOccurrenceLL(head, k);
std::cout << "Linked List occurrences of " << k << ": " << llcount << std::endl;
return 0;
}


