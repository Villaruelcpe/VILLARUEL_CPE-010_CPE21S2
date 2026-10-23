#ifndef SINGLY_LL_H
#define SINGLY_LL_H

//node creation 
template <typename T>
class SingleList {
    public:
    T data; //this contains the data to be stored in the node
    SingleList<T>* next = nullptr;
};

template <typename T>
void ListTraversal(SingleList<T>* head){
    //print data of n 
    while(head != nullptr){
        std::cout << head->data;

        if(head->next != nullptr){
            std::cout << " -> ";
        }
        //go to the next node
        head = head->next;
    }

    std::cout << std::endl; 
}

template <typename T>
void sllinsertHead(T newData, SingleList<T>** currentHead){
    //allocate memory for the new node
    SingleList<T>* newNode = new SingleList <T>;

    //put our data into the new node
    newNode->data = newData;

    //set next of the new node to point to the previous head
    newNode->next = *currentHead;

    //reset head to point to the new node
    *currentHead = newNode;
}

template <typename T>
void sllGeneralInsert(T newData, SingleList<T>* preNode){
    //check if it is the head node(previous node is null)
    if(preNode ==nullptr){
        //if null, print "previous node cannot be null"
        std::cout<<"Previous value cannot be null"<<std::endl;
        return;
    }
    //allocate new node
    SingleList<T>* newNode = new SingleList<T>;

    //store data in the new node
    newNode->data = newData;
 
    //point new node to the previous node
    newNode->next = preNode->next;

    //point previous 
    preNode->next = newNode;

}

template <typename T>
void sllinsertEnd(T newData, SingleList<T>** head){
    //allocate a new node 
    SingleList<T>* newNode = new SingleList<T>;
    //dereference to the new node 
    SingleList<T>* currentNode = *head;
    //store data in new node
    newNode-> data = newData;
    //point to null
    newNode->next = nullptr;
    //traverse the list until next of the node is null
    while(currentNode->next != nullptr){
        currentNode = currentNode->next;
    }
    //point to the next of the current node to the new node
    currentNode->next = newNode;
}

template <typename T>
void sllDeleteNode(T findData, SingleList<T>** head){

    //if there is nothing to be delete?
    if(*head == nullptr) return;

    SingleList<T>* currNode = *head;
    SingleList<T>* prevNode = nullptr;

    //searching the node 
    while(currNode != nullptr && currNode->data != findData){
        prevNode =currNode;
        currNode= currNode->next;
    }
    //if data are not found currnode == nullptr in the while loop:
    if(currNode == nullptr){
        std::cout<< "the data is not found \n"<<std::endl;
        return;
    }
     //if data was found:
    if(prevNode == nullptr){
        *head = currNode->next;
    }else{
        prevNode->next = currNode->next;
    }
    delete currNode;
 }

template <typename T>
void sllDeleteList(SingleList<T> **head){
    SingleList<T>* current = *head;

    while(current != nullptr){
        SingleList<T>* temp = current;
        current = current->next;
        delete temp;
    }

    *head = nullptr;
}


#endif 