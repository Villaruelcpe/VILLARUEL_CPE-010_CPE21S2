#ifndef STACK_LL_H
#define STACK_LL_H

//class node
template <typename T>
class Node{
    public:
    T data; //storing
    Node* next; //point to next node
};

template <typename T>
Node<T> *head = nullptr;

//operations
//push 
template <typename T>
void push(T newData){
    //create
    Node<T>* newNode = new Node<T>();
    newNode->data = newData;

    //points to current top then becomes that top
    newNode->next = head<T>;
    head<T> = newNode;
}

//pop
template <typename T>
T pop(){
    //check if empty
    if(head<T> == nullptr){
        std::cout<<"Stack Underflow."<<std::endl;
        return T();
    }

    //save
    Node<T>* temp = head<T>;
    //store
    T tempVal = temp->data;

    //move the head
    head<T> = head<T>->next;
    delete temp;
    return tempVal;
}

//isEmpty
template <typename T>
bool isEmpty(){
    return head<T> == nullptr;
} 

//top
template <typename T>
void Top(){
    //error catching
    if(isEmpty<T>()){
        std::cout<<"Stack Underflow."<<std::endl;
        return;
    }
    //display
    std::cout<<"Top of stack: "<<head<T>->data << std::endl;
}


//display all
template <typename T>
void displayALL(){
    if (head<T> == nullptr){
        std::cout << "Stack Underflow.\n";
        return;
    }
    std::cout<<"Display the Stack: \n";
    Node<T>* temp = head<T>;
    while(temp != nullptr){
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
    std::cout << "\n";
}
#endif