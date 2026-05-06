//Write a function for parameterized constructor.
#include <iostream>
using namespace std;
class Student
{
    int id;
    string name;
public:
    Student(int i, string n)
    {
        id = i;
        name = n;
    }
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};
int main()
{
    Student s1(1, "John");
    s1.display();
    return 0;
}
