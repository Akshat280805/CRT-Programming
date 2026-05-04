//WAP in cpp that takes 2 number and operator as input from the user perform the corresponding arithemetic operation and print result without if else.
#include <iostream>
using namespace std;
int main() {
    int a,b;
    char op;
    cin >> a >> op >> b;
    switch(op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
        default: cout << "Invalid operator";
    }
    return 0;
}