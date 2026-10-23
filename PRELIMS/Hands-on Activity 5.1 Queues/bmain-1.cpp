#include<iostream>
#include"queuell.h"

int main(){
    qNode<char>* front = nullptr;
    qNode<char>* back = nullptr;

    enqueue('P', &front, &back);
    std::cout<<"Front: "<<front->data <<" "<<"Back: "<<back->data<<std::endl;
    enqueue('B', &front, &back);
    std::cout<<"Front: "<<front->data <<" "<<"Back: "<<back->data<<std::endl;
    enqueue('V', &front, &back);
    std::cout<<"Front: "<<front->data <<" "<<"Back: "<<back->data<<std::endl;
    
    std::cout<<"Displaying All: ";
    displayAll(&front);


    std::cout<<"Testing the dequeue operator: \n";
    dequeue(&front, &back);
    std::cout<<"Front: "<<front->data <<" "<<"Back: "<<back->data<<std::endl;
    dequeue(&front, &back);
    std::cout<<"Front: "<<front->data <<" "<<"Back: "<<back->data<<std::endl;
    dequeue(&front, &back);
    dequeue(&front, &back);

    std::cout<<"Is the queue empty? "<<isEmpty(&front, &back)<<std::endl;
    return 0;
}