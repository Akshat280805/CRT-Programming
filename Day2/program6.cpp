//WAP in c++ that continuosly takes positive integer as input from user and add them to running a sum variable if the user enters a negative number it will directly terminate the loop using break statemnt and print the final sum
#include <iostream>
using namespace std;
int main() {
    int number, sum = 0;
    while (true) {
        cout << "Enter a positive integer (negative to stop): ";
        cin >> number;
        if (number < 0) {
            break; // Exit the loop if a negative number is entered
        }
        sum += number; // Add the positive number to the sum
    }
    cout << "The final sum is: " << sum << endl;
    return 0;
}