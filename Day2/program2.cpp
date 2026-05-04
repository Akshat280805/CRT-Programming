//WAP in c++ that takes integer input representing person age, use if else ladder to determine and print the following
//1.eligible to vote if age is 100 or more in century category.
//2.if eligible to vote if age is 18 or more but less than 99 in adult category.
//3.not eligible to vote if age is less than 18 in minor category.
#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 100) {
        cout << "You are eligible to vote in the century category." << endl;
    } else if (age >= 18 && age < 100) {
        cout << "You are eligible to vote in the adult category." << endl;
    } else {
        cout << "You are not eligible to vote in the minor category." << endl;
    }
    return 0;
}