//WAP in c++ that takes student percentage 0-100 as input and calculate their grades according to the following criteria.
//90-100 A
//80-89 B
//70-79 C
//60-69 D
//50-59 E

#include <iostream>
using namespace std;  
int main() {
    float per;
    cout << "Enter student ercentage (0-100): ";
    cin >> per;
    if (per >= 90 && per <= 100) {
        cout << "Grade: A" << endl;
    } else if (per >= 80 && per < 90) {
        cout << "Grade: B" << endl;
    } else if (per >= 70 && per < 80) {
        cout << "Grade: C" << endl;
    } else if (per >= 60 && per < 70) {
        cout << "Grade: D" << endl;
    } else if (per >= 50 && per < 60) {
        cout << "Grade: E" << endl;
    } else {
        cout << "Invalid percentage. Please enter a value between 0 and 100." << endl;
    }
    return 0;
}