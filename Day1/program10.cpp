//take input form user and tell whether it is uppercase or lowercase.
#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is uppercase." << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "The character is lowercase." << endl;
    } else {
        cout << "The character is not an alphabet." << endl;
    }
    return 0;
}