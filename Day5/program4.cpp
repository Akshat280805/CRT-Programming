//WAP in c++ for with argument and with return type function.
#include<iostream>
using namespace std;
string display(string name)
{
    return "Hello "+name+"!";
}
int main()
{
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<display(name)<<endl;
    return 0;
}