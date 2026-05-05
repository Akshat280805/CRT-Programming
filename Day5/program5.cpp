//WAP in c++ for without argument with return type function
#include<iostream>
using namespace std;
int sum()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    return a+b;
}
int main()
{
    int result;
    result=sum();
    cout<<"The sum is: "<<result;
    return 0;
}