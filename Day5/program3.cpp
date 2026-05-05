//WAP in c++ for with argument and without return type function.
#include<iostream>
using namespace std;
void display(string name)
{
    cout<<"Hello "<<name<<"!"<<endl;
}
int main()
{
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    display(name);
    return 0;
}