#ifndef DOUBLY_LL_H
#define DOUBLY_LL_H

template <typename T>
class DoubleList{
    public:
        T data;
        DoubleList<T>* prev = nullptr;
        DoubleList<T>* next = nullptr;
};

//creating a node
template <typename T>
DoubleList<T> *CreateNewNode(T newData){
    //dynamically allocate a new memory for the node 
    DoubleList<T> *newNode = new DoubleList<T>;

    //store the data in the node
    newNode->data = newData;
    //point next and prev to null
    newNode->next = nullptr;
    newNode->prev = nullptr;
    //return the address of the newly created node
    return newNode;
}

    template <typename T>
    void dllTraverse(DoubleList<T>* currentNode){
        //temp variable to store the last node visited
        DoubleList<T> *tail;

        //check if the node is empty 
        if(currentNode == nullptr){
            std::cout<<"The list is empty."<<std::endl;
            return;
        }
        std::cout<<"Forward \n";
        //move forward
        while(currentNode != nullptr){
            std::cout<< currentNode->data << " ";
            tail = currentNode;
            currentNode = currentNode-> next;

        }
        //add a next line
        std::cout<<std::endl;
        //move backward 
        std::cout<<" \n";

        while(tail != nullptr){
            std::cout<< tail->data<<" ";
            tail = tail->prev;
        }
    }
    //inserting at the head of the list 
    template <typename T>
    void dllInsterHead(T newData, DoubleList<T> ** currentHead){
        //creating a new node
        DoubleList<T>* newNode = CreateNewNode(newData);
        //new node should point to the curremt head
        newNode->next = *currentHead;
        //current head should point back to the newNode
        (*currentHead)->prev = newNode;
        //update
        *currentHead = newNode;
    }

    template <typename T>
    void dllInsertEnd(T newData, DoubleList<T>* currentHead){
        //create a new node 
        DoubleList<T>* newNode = CreateNewNode(newData);
        //traverse 
        while(currentHead->next != nullptr){
            currentHead = currentHead->next;
        }

        //connect
        currentHead->next = newNode;

        //connect 
        newNode->prev = currentHead;
    }

    //general insert
    template <typename T>
    void dllGeneralInsert(T newData, DoubleList<T>* preNode){
        //chech if it is the prev node is null
        if(preNode == nullptr){
            std::cout<<"the data is not found \n"<<std::endl;
            return;
         }
        //if data was found
        DoubleList<T>* newNode = new DoubleList<T>;
        newNode->data = newData;
    
        //point 
        newNode->next = preNode->next;
        newNode->prev = preNode;

        if (newNode != nullptr) {
        newNode->next->prev = newNode;
        }
        preNode->next = newNode;
    
    }

    template <typename T>
    void dllDeleteNode(T findData, DoubleList<T>** head){
        //if nothing to delete
        if(head == nullptr) return;

        DoubleList<T>* currNode = *head;
        //search
        while(currNode != nullptr && currNode->data != findData){
            currNode= currNode->next;
        }
        //if no data was found
        if(currNode == nullptr){
            std::cout<<"The data is not found \n"<<std::endl;
            return;
        }

        //if data was found
        if(currNode->prev == nullptr){
        *head = currNode->next;
        if(*head != nullptr){
            (*head)->prev = nullptr;      
        }
    } else {
        currNode->prev->next = currNode->next;   
    }
    if(currNode->next != nullptr){
        currNode->next->prev = currNode->prev;
    }
        delete currNode;
    
    }      
#endif