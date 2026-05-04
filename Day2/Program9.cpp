//WAP in c++ that simulates a simple customer support system using switch case statement in that menu the options are:-
//1. Support
//2. billing
//3. technical
//4. Talk to a representative
#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "Welcome to Customer Support System" << endl;
    cout << "Please select an option:" << endl;
    cout << "1. Support" << endl;
    cout << "2. Billing" << endl;
    cout << "3. Technical" << endl;
    cout << "4. Talk to a representative" << endl;
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "You have selected Support." << endl;
            break;
        case 2:
            cout << "You have selected Billing." << endl;
            break;
        case 3:
            cout << "You have selected Technical." << endl;
            break;
        case 4:
            cout << "Connecting you to a representative..." << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
    }
    return 0;
}

