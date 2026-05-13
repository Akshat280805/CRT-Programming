//WAP in c++ to check if n is power of 2 from the following given number
//1. n=8.
//2. n=1.
//3. n=0.
//4. n=9.
#include<iostream>
using namespace std;
bool poweroftwo(int n)
{
    if (n <= 0)
    {
        return false;
    }
    return (n & (n - 1)) == 0;
}
int main()
{
    int arr[] = {8, 1, 0, 9};
    for(int i = 0; i < 4; i++)
    {
        int n = arr[i];
        if(poweroftwo(n))
            cout << n << " is Power of 2" << endl;
        else
            cout << n << " is Not Power of 2" << endl;
    }
    return 0;
}

