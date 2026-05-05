//WAP IN C++ FOR CODE FOR POINTER.
#include<iostream>
using namespace std;
int main()
{
    int value=10;
    int *ptr=&value;
    cout<<"ADD: "<<ptr<<endl;
    cout<<"VALUE: "<<*ptr<<endl;
    *ptr =20;
    cout<<"VALUE: "<<*ptr<<endl;
    return 0;
}
