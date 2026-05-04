//WAP in C++ that takes 2 integer input from user and swap their values using the temproary variable and print the updated values.
#include <iostream>
using namespace std;
int main() {
    int a, b, temp;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping:" << endl;
    cout << "First integer: " << a << endl;
    cout << "Second integer: " << b << endl;
    return 0;
}