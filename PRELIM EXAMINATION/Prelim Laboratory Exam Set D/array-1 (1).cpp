#include <iostream>
#include <string>

//checking 
bool isSymmetricArray(const std::string& expr) {
    const int maxCap = 100;
    char stackArr[maxCap];
    int top = -1;

    for (char c : expr) {
        if (top >= maxCap - 1) {
            return false; 
        }
        stackArr[++top] = c;
    }
    // compare 
    for (char c : expr) {
        if (top < 0) {
            return false;
        }
        char popped = stackArr[top--];

        if (c != popped) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string testCases[] = {
        "12321",
        "12345",
        "1221",
        "7",
        "123321",
        "1234325"
    };

    std::cout << "Sequence Checker (Stack using Array):"
              << std::endl;

    for (const std::string& expr : testCases) {
        std::cout << "Expression: " << expr << " -> "
                  << (isSymmetricArray(expr) ? "Valid (Y)" : "Invalid (N)")
                  << std::endl;
    }

    return 0;
}
