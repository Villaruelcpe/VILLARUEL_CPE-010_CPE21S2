#ifndef BALANCE_CHECKER_LL_H
#define BALANCE_CHECKER_LL_H
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

//stack using LL

struct Node{
    char data;
    Node* next;
};

inline bool isBalancedLinkedList(const std::string &expr){
    Node* head = nullptr;

    for(char c : expr){
        if(isOpening(c)){
            //push
            Node* newNode = new Node();
            newNode->data = c;
            newNode->next = head;
            head = newNode;
        }
        else if(isClosing(c)){
            if(head == nullptr) return false;

            //pop
            Node* temp = head;
            char popped = temp->data;
            head = head->next;
            delete temp;

            if(!isMatchingPair(popped, c)) return false;
        }

    }
bool balanced = (head == nullptr);
while(head != nullptr){
    Node* temp = head;
    head = head->next;
    delete temp;
}
return balanced;
}

#endif