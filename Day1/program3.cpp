//WAP in C++ that takes 3 integer input from user representing the sides of triangle print true if triangle is equilateral else false use onl relational and logical operator
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;
    bool isEquilateral = (a == b) && (b == c);
    if (isEquilateral) {
        cout << "The triangle is equilateral." << endl;
    } else {
        cout << "The triangle is not equilateral." << endl;
    }
    return 0;
}