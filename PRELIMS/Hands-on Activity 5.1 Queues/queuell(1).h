#ifndef QUEUELL_H
#define QUEUELL_H

template<typename T>
class qNode {
    public:
        T data;
        qNode * next;
};

template <typename T>
qNode<T>* new_node (T newData){
    qNode<T>* newNode = new qNode<T>;
    newNode->data = newData;
    newNode->next = nullptr;
    return newNode;
}

template <typename T>
void enqueue(T newData, qNode<T>** frontPtr, qNode<T>** backPtr){
    qNode<T>* newNode = new_node(newData);

    if((*frontPtr)==nullptr && (*backPtr)==nullptr){
        (*backPtr) = newNode;
        (*frontPtr)= newNode;
        return;
    }
    (*backPtr)->next = newNode;
    (*backPtr) = newNode;
}

template <typename T>
void dequeue(qNode<T>** frontPtr, qNode<T>** backPtr){
    if((*frontPtr)== nullptr && (backPtr)== nullptr){
        std::cout<<"The queue is empty."<<std::endl;
        return;
    }
    qNode<T>* deleteTemp = nullptr;
    deleteTemp = (*frontPtr);

    if((*frontPtr)== nullptr && (*backPtr)->next == nullptr){
        (*frontPtr) = nullptr;
        (*backPtr) = nullptr;
        delete deleteTemp;
        return;
    }
    (*frontPtr) = (*frontPtr)->next;
    deleteTemp->next = nullptr;
}

//isEmpty 
template <typename T>
bool isEmpty(qNode<T>** frontPtr, qNode<T>** backPtr){
    return((*frontPtr)== nullptr && (*backPtr) == nullptr);
}

//displayAll
template <typename T>
void displayAll(qNode<T>** frontPtr){
    qNode<T>* temp = (*frontPtr);
    while(temp != nullptr){
        std::cout<<" "<<temp->data<<" ";
        temp = temp->next;
    }
    std::cout<<std::endl;
}




#endif