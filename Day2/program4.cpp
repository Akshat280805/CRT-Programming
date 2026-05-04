//WAP in c++ that takes 2 integer input from user and find greatest number using ternary operator.
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    int greatest = (num1 > num2) ? num1 : num2;
    cout << "The greatest number is: " << greatest << endl;
    return 0;
}