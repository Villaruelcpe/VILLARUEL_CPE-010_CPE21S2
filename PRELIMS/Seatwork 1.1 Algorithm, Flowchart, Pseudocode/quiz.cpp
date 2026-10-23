//Prince Benjamin S. VIllaruel

#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    float q1, q2, q3;
    float total, average;
    float passingGrade = 7.5;
    

    cout << "Quiz 1: ";
    cin >> q1;
    cout << "Quiz 2: ";
    cin >> q2;
    cout << "Quiz 3: ";
    cin >> q3;

    total = q1 + q2 + q3;
    average = total / 3;

    cout << fixed << setprecision(2);
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;

    if (average >= passingGrade)
        cout << "Passed" << endl;
    else
        cout << "Failed" << endl;

    return 0;


}