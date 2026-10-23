#include <iostream>
#include <string>

//helpers
bool isMatchingPair(char opening, char closing){
    if(opening=='('&& closing== ')') return true;
    if(opening=='['&& closing== ']') return true;
    if(opening=='{'&& closing== '}') return true;
    return false;
}
bool isOpening(char c){return c=='(' || c=='{' || c=='['; }
bool isClosing(char c){return c==')' || c=='}' || c==']'; }

//stack using arrays
bool isBalancedArray(const std::string &expr){
    const int maxCap = 100;
    char stackArr[maxCap];
    int top = -1;

    for(char c : expr){
        if(isOpening(c)){
            stackArr[++top] = c; //push 
        }
        else if(isClosing(c)){
            if(top == -1) return false;
            char popped = stackArr[top--];
            if(!isMatchingPair(popped, c)) return false; //mismatch = error
         }
    }
    return top == -1;
}
int main(){
    std::string testCases[] = {
        "(A+B)+(C-D)",
        "((A+B)+(C-D)",
        "((A+B)+[C-D])",
        "((A+B]+[C-D])"
    };

    std::cout <<"Balance Checker (Array): "<<std::endl;
    for(const std::string &expr : testCases){
        std::cout << "Expression: " << expr << " -> "
            << (isBalancedArray(expr) ? "Valid (Y)" : "Invalid (N)")<<std::endl;
    }
    return 0;
}