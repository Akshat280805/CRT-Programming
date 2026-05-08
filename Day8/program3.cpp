//WAP in cpp for friend function for area with example by help of length and breadth.
#include <iostream>
using namespace std;
class Area
{
private:
    int length;
    int breadth;
public:
    void setData(int l, int b)
    {
        length = l;
        breadth = b;
    }
    friend void showArea(Area a);
};
void showArea(Area a)
{
    int area = a.length * a.breadth;
    cout << "Area is: " << area << endl;
}
int main()
{
    Area a;
    a.setData(5, 10);
    showArea(a);
    return 0;
}