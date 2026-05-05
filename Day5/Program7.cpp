//WAP in c++ Reference variable.
#include<iostream>
using namespace std;
int main()
{
    int value=10;
    int &ref=value;
    cout<<"VALUE: "<<ref<<endl;
    ref=20;
    cout<<"VALUE: "<<ref<<endl;
    return 0;
}