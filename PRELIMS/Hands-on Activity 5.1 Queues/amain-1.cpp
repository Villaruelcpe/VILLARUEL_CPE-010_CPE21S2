#include<iostream>
#include<queue>

void display(std::queue<char> copyQ);
int main(){
    
    std::queue<char> myQ;

    myQ.push('P');
    myQ.push('B');
    myQ.push('V');
    std::cout<<"Current front is: "<<myQ.front()<<std::endl;
    std::cout<<"Current back is: "<<myQ.back()<<std::endl;
    display(myQ);
    myQ.pop();
    display(myQ);
    myQ.pop();
    display(myQ);
    myQ.pop();
    std::cout<<"Is the queue empty? "<<myQ.empty()<<std::endl;

    return 0;
}

void display(std::queue<char> copyQ){
    std::queue<char> temp = copyQ;
    while(!temp.empty()){
        std::cout<<" "<<temp.front()<<" ";
        temp.pop();
    }
    std::cout<<std::endl;
}