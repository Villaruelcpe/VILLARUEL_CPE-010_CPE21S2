#include <iostream>
#include <stack>

int main(){
    std::stack<int> stack1;
    std::cout<<"Testing the stack STL:"<<std::endl;

    //isempty
    std::cout<<"Is the stack empty? "<<stack1.empty()<<std::endl;
    //push
    stack1.push(2);
    std::cout<<"The top of the stack is "<<stack1.top()<<std::endl;
    stack1.push(1);
    std::cout<<"The top of the stack is "<<stack1.top()<<std::endl;
    stack1.push(3);
    std::cout<<"The top of the stack is "<<stack1.top()<<std::endl;
    stack1.push(4);
    std::cout<<"The top of the stack is "<<stack1.top()<<std::endl;
    //pop
    stack1.pop();
    std::cout<<"The size of the stack is "<<stack1.size()<<std::endl;
    std::cout<<"The top of the stack is "<<stack1.top()<<std::endl;
    //isempty
    std::cout<<"Is the stack empty? "<<stack1.empty()<<std::endl;
    //emplace
    stack1.emplace(5);
    std::cout<<"The top of the stack is "<<stack1.top()<<std::endl;
    //before pop
    std::cout<<"The size of the stack is "<<stack1.size()<<std::endl;
    stack1.pop();
    //after pop
    std::cout<<"The size of the stack is "<<stack1.size()<<std::endl;
    //swap
    std::stack<int> stack2;
    //push stack2
    stack2.push(9);
    std::cout<<"The top of the stack is "<<stack2.top()<<std::endl;
    stack2.push(8);
    std::cout<<"The top of the stack is "<<stack2.top()<<std::endl;
    stack2.push(7);
    std::cout<<"The top of the stack is "<<stack2.top()<<std::endl;
    stack2.push(6);
    std::cout<<"The top of the stack is "<<stack2.top()<<std::endl;
    //swapping'
    stack1.swap(stack2);
    //results
    std::cout<<"The size of the stack is "<<stack1.size()<<std::endl;
    std::cout<<"The size of the stack is "<<stack2.size()<<std::endl;
}