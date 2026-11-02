#include<iostream>
#include "node.h"

//get middle node
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
    //binary search for ll
    template<typename T>
    bool binarySearchLL(Node<T>* start, T dataFind) {
        Node<T>* last = nullptr;
        while (start != last) {
            Node<T>* middle = getMiddle(start, last);
            if (middle->data == dataFind) return true;
            else if (middle->data > dataFind) last = middle;
            else start = middle->next;
        }
        return false;
    }

    //binary search array
    bool binarySearchArr(int arr[], int size, int key){
        int low = 0, high = size - 1;
        while (low <= high){
            int mid = (low + high) / 2;
            if (key == arr[mid]) return true;
            else if (key < arr[mid]) high = mid -1;
            else low = mid + 1;
        }
        return false;
    }

    int main() {
    int dataset[] = {3, 5, 6, 8, 11, 12, 14, 15, 17, 18};
    int size = 10;
    int key = 8;

    //array binary search
    bool foundArr = binarySearchArr(dataset, size, key);
    std::cout << "Array search result: "<<(foundArr ? "Found" : "Not Found") << std::endl;

    Node<int>* head = new_node(dataset[0]);
    Node<int>* curr = head;
    for (int i = 1; i < 10; i++ ) {
        curr->next = new_node(dataset[i]);
        curr = curr->next;
    }

    //linked list binary search
    bool foundLL = binarySearchLL(head, key);
    std::cout << "LL search result: "<<(foundLL ? "Found" : "Not Found") << std::endl;
    return 0;
    }