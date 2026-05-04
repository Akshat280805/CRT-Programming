//WAP in c++ to take age input from user and check if age is 18 or above eligible to vote or not eligble to vote below 18 using while loop
#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    while (age < 0) {
        cout << "Invalid age. Please enter a non-negative age: ";
        cin >> age;
    }
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }
    return 0;
}