#include<iostream>
#include "node.h"

//recursive binary search array
int recursiveBinarySearchArr(int arr[], int low, int high, int key) {
    if(low > high) return -1;

    int mid = (low + high) / 2;
    if (arr[mid] == key) return mid;
    else if (arr[mid] > key) return recursiveBinarySearchArr(arr, low, mid - 1, key);
    else return recursiveBinarySearchArr(arr, mid + 1, high, key);
}

//get middle node for ll binary search
template <typename T>
Node<T>* getMiddle(Node<T>* start, Node<T>* last) {
    Node<T>* slow = start;
    Node<T>* fast = start;

    while (fast != last && fast->next != last) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

//recursive binary search for ll
template <typename T>
bool recursiveBinarySearchLL(Node<T>* start, Node<T>* last, T key) {
    if (start == last) return false;

    Node<T>* middle = getMiddle(start, last);
    if (middle->data == key) return true;
    else if (middle->data > key) return recursiveBinarySearchLL(start, middle, key);
    else return recursiveBinarySearchLL(middle->next, last, key);
}

int main(){
    int dataset[] = {3, 5, 6, 8, 11, 12, 14, 15, 17, 18};
    int size = 10;
    int key = 8;

    //array recusrive searcvh
    int index = recursiveBinarySearchArr(dataset, 0, size - 1, key);
    std::cout << "Array search result: " << (index != -1 ? "Found" : "Not Found") << std::endl;

    Node<int>* head = new_node(dataset[0]);
    Node<int>* curr = head;
    for (int i = 1; i < 10; i++ ) {
        curr->next = new_node(dataset[i]);
        curr = curr->next;
    }
    
    //ll recyrsive search
    bool foundLL = recursiveBinarySearchLL(head, (Node<int>*)nullptr, key);
    std::cout << "LL search result: " << (foundLL ? "Found" : "Not Found") << std::endl;
    return 0;
}

