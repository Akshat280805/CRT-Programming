//Wap in C++ for a=a>>2; b=b>>3; left shift and right shift operator
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    a = a >> 2; 
    b = b >> 3; 
    cout << "Value of a after right shift: " << a << endl;
    cout << "Value of b after right shift: " << b << endl;

    return 0;
}