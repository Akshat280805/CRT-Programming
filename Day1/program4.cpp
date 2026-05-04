//WAP In C++ where it takes 2 integer input a and b multiply a by 4 using bitwise left shift operator and print the value of a.
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two integers (a and b): ";
    cin >> a >> b;
    a = a << 2; 
    cout << "Value of a after multiplying by 4: " << a << endl;
    return 0;
}