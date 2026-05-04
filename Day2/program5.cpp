//WAP in c++ that takes integer a as input print all number from 1 to n but skip any number that is multple of 3 using continue statement.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "Numbers from 1 to " << n << " (skipping multiples of 3): ";
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            continue; 
        }
        cout << i << " ";
    }
    cout << endl;
    return 0;
}