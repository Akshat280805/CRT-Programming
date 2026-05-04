//WAP in c++ having value i from 1 to 10 and check what it prints using do while loop
#include <iostream>
using namespace std;
int main() {
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= 10);
    cout << endl;
    return 0;
}