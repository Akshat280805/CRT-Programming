//WAP in c++ for encapsulation code with atm withdrawal system example.
#include <iostream>
using namespace std;
class ATM
{
private:
    int balance;
public:
    void setBalance(int n)
    {
        this->balance = n;
    }
    void withdraw(int amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance" << endl;
        }
        else
        {
            balance = balance - amount;
            cout << "Withdrawal successful" << endl;
        }
    }
    int getBalance();
};
int main()
{
    ATM a;
    int n, amount;
    cout << "Enter initial balance: ";
    cin >> n;
    a.setBalance(n);
    cout << "Current balance: " << a.getBalance() << endl;
    cout << "Enter withdrawal amount: ";
    cin >> amount;
    a.withdraw(amount);
    cout << "Current balance: " << a.getBalance() << endl;
    return 0;
}
int ATM::getBalance()
{
    return balance;
}