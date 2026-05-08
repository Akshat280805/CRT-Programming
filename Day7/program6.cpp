//WAP in c++ for virtual function.
#include <iostream>
using namespace std;

class Player
{
public:
    virtual void show()
    {
        cout << "This is a player." << endl;
    }
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
    Player *p;
    Cricketer c;

    p = &c;
    p->show();

    return 0;
}
