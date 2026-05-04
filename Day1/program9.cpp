//WAP in C++ to takes input of 2 number from user and match it with 2 constant variable present or stored with us, if variable matches login successfully else print invalid credential.
#include <iostream>
using namespace std;
int main() {
    string user, pass;
    string correctuser = "admin";
    string correctpass = "admin123";
    cout << "Enter username: ";
    cin >> user;
    cout << "Enter password: ";
    cin >> pass;
    if (user == correctuser && pass == correctpass) {
        cout << "Login successful!" << endl;
    } else {
        cout << "Invalid credentials!" << endl;
    }
    return 0;
}