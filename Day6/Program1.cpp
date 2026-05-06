//WAP to create student class with data members name, roll number and marks. Create a member function to display the details of the student. Create an array of 5 students and display their details.
#include <iostream>
using namespace std;
class Student {
    private:
        string name;
        int rollNumber;
        float marks;
        public:
        void setDetails(string n, int r, float m) {
            name = n;
            rollNumber = r;
            marks = m;
        }
        void displayDetails() {
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Marks: " << marks << endl;
        }
};