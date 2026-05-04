//WAP in c++ that takes positive input n and then calculate factorial using for loop
#include <iostream>
using namespace std;
int main() {
    int n, fact=1;
    cin >> n;
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    cout<< "Factorial of " << n << " is: " << fact << endl;
    return 0;
}