//Write a function to create student class with name, roll no, inside it their should be a registration number present as well that is store inside another class it should be private that cannot access by us but only college access it.
#include <iostream>
using namespace std;
class College
{
private:
    int reg_no;  
public:
    void setRegNo(int r)
    {
        reg_no = r;
    }

    void displayRegNo()
    {
        cout << "Registration Number: " << reg_no << endl;
    }
};
class Student
{
private:
    string name;
    int roll_no;
    College c;   
public:
    void setData(string n, int r, int reg)
    {
        name = n;
        roll_no = r;
        c.setRegNo(reg);   
    }

    void displayData()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        c.displayRegNo();   
    }
};
int main()
{
    Student s;
    s.setData("Akshat", 101, 5001);
    s.displayData();
    return 0;
}