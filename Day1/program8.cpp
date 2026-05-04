//Wap in C++ that takes 3 integer input from user and calculate their total sum and average and print the result.
#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    int sum = num1 + num2 + num3;
    double average = sum / 3.0;
    cout << "Total Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    return 0;
}