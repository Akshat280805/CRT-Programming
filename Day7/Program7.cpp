//WAP in c++ for pure virtual function.
#include <iostream>
using namespace std;

class Player
{
public:
    virtual void show() = 0;
};
class Cricketer : public Player
{
public:
    void show()
    {
        cout << "This is a cricketer." << endl;
    }
};
int main()
{
    Cricketer c;
    c.show();
    return 0;
}