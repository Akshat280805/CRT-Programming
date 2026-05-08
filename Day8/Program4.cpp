//WAP in C++ to demonstrate static data member using Employee class.
#include <iostream>
using namespace std;
class Employee
{
public:
    static int reg_no;
    void show()
    {
        cout << "Employee Reg No is: " << reg_no << endl;
    }
};
int Employee::reg_no = 100;
int main(){
    Employee E1;
    Employee E2;
    Employee E3;
    Employee E4;
    Employee :: show();
    return 0;
}
