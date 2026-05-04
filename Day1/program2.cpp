#include <iostream>
using namespace std;
int globalVar = 200;
void performDivision() {
    int userInput;
    cout << "Enter an integer: ";
    cin >> userInput;

    if (userInput == 0) {
        cout << "Division by zero not allowed!" << endl;
        return;
    }

    float result = (float)globalVar / userInput;

    cout << "Result of division: " << result << endl;
}
int main() {
    performDivision();
    return 0;
}