//Write a function in cpp for creating a college management system in that in base class containing person age details and 2 derived class student and teacher contains their data respectively then also create a virtual function they belong to which category by default they are part of college otherwise they are part of derived class.
#include <iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;
    public:
    void setPerson(string n, int a)
    {
        name = n;
        age = a;
    }
    void showPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    virtual void category()
    {
        cout << "This person is part of the college." << endl;
    }
};
class Student : public Person
{
private:
    int rollNo;
public:
    void setStudent(int r)
    {
        rollNo = r;
    }
    void showStudent()
    {
        showPerson();
        cout << "Roll Number: " << rollNo << endl;
    }
    void category()
    {
        cout << "This person is a Student." << endl;
    }
};
class Teacher : public Person
{
private:
    string subject;
public:
    void setTeacher(string s)
    {
        subject = s;
    }

    void showTeacher()
    {
        showPerson();
        cout << "Subject: " << subject << endl;
    }

    void category()
    {
        cout << "This person is a Teacher." << endl;
    }
};
int main()
{
    Person *p;
    Student s;
    s.setPerson("Akshat", 20);
    s.setStudent(101);
    Teacher t;
    t.setPerson("Sharma", 40);
    t.setTeacher("Mathematics");
    p = &s;
    s.showStudent();
    p->category();
    cout << endl;
    p = &t;
    t.showTeacher();
    p->category();
    return 0;
}