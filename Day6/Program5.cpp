//Write a function for copy constructor.
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
    Student(const Student &s)
    {
        id = s.id;
        name = s.name;
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
    Student s2 = s1; 
    s2.display();
    return 0;
}