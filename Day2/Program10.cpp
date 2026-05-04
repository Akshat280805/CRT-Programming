//WAP in c++ that simulates on ATM machine system it should take withdrawal amount form user and determine whether transaction is valid or not.
#include <iostream>
using namespace std;
int main() {
    int balance,amount;
    cout << "Enter your current balance: ";
    cin >> balance;
    cout << "Enter the amount you want to withdraw: ";
    cin >> amount;
    if(amount <= 0){
        cout << "Invalid amount. Please enter a positive value." << endl;
    }
    else if (amount > balance) {
        cout << "Insufficient balance. Transaction declined." << endl;
    } else {
        balance -= amount;
        cout << "Transaction successful. Your new balance is: " << balance << endl;
    }
    return 0;
}   