//Write a function for default constructor.
#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;
    Student(){
        name = "Riya";
        roll_no = 102;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
    }
};
int main(){
    Student s;
    s.display();
    return 0;
}
