//WAP in c++ to create a student management system where er sotre and display student details:-
//1. NAME
//2. ROLL NUMBER
//3. Rregistration number
//4. EMAIL ID
//5. CONTACT NUMBER
//6. marks or grade
//Using parameterized constructor and default constructor.

#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int rollNo;
    string regNo;
    string email;
    string contact;
    float marks;

public:
    Student() {
        name = "Not Assigned";
        rollNo = 0;
        regNo = "N/A";
        email = "N/A";
        contact = "N/A";
        marks = 0.0;
    }
    Student(string n, int r, string reg, string e, string c, float m) {
        name = n;
        rollNo = r;
        regNo = reg;
        email = e;
        contact = c;
        marks = m;
    }
    void display() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Registration No: " << regNo << endl;
        cout << "Email: " << email << endl;
        cout << "Contact: " << contact << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student s[100]; 
    for (int i = 0; i < n; i++) {
        string name, reg, email, contact;
        int roll;
        float marks;
        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> name;
        cout << "Roll No: ";
        cin >> roll;
        cout << "Registration No: ";
        cin >> reg;
        cout << "Email: ";
        cin >> email;
        cout << "Contact: ";
        cin >> contact;
        cout << "Marks: ";
        cin >> marks;
        s[i] = Student(name, roll, reg, email, contact, marks);
    }
    cout << "\n===== Student Records =====\n";
    for (int i = 0; i < n; i++) {
        s[i].display();
    }

    return 0;
}