//WAP in c++ that takes 3 distinct integer input from user and find the greatest number among them using nested conditon statement.
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three distinct integers: ";
    cin >> a >> b >> c;
    if (a > b) {
        if (a > c) {
            cout << "The greatest number is: " << a << endl;
        } else {
            cout << "The greatest number is: " << c << endl;
        }
    } else {
        if (b > c) {
            cout << "The greatest number is: " << b << endl;
        } else {
            cout << "The greatest number is: " << c << endl;
        }
    }

    return 0;
}