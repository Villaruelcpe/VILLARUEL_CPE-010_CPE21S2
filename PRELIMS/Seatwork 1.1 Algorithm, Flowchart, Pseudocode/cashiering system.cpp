//Prince Benjamin S. Villaruel
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string item1, item2, item3;
    float price1, price2, price3;
    float total, payment, change;

    cout << "Enter name of Item 1: ";
    cin >> item1;
    cout << "Enter price of " << item1 << ": ";
    cin >> price1;

    cout << "Enter name of Item 2: ";
    cin >> item2;
    cout << "Enter price of " << item2 << ": ";
    cin >> price2;

    cout << "Enter name of Item 3: ";
    cin >> item3;
    cout << "Enter price of " << item3 << ": ";
    cin >> price3;

    total = price1 + price2 + price3;

    cout << fixed << setprecision(2);
    cout << "Total amout to pay: " << total << endl;
    cout << "Enter payment amount: ";
    cin >> payment;

    if (payment >= total) {
        change = payment - total;

        cout << item1 << ": " << price1 << endl;
        cout << item2 << ": " << price2 << endl;
        cout << item3 << ": " << price3 << endl;
        cout << "Total: " << total << endl;
        cout << "Payment: " << payment << endl;
        cout << "Change: " << change << endl;
    } else {
        cout << "INsufficient payment. You still owe: "
            << (total - payment) << endl;

    }

    return 0;


}