//WAP in c++ for multiple inheritance with class like cricketer , player ,etc.
#include <iostream>
using namespace std;
class Cricketeer {
    int runs;
public:
    void setRuns(int r) {
        runs = r;
    }
    void show() {
        cout << "Runs scored: " << runs << endl;
    }
};
class Player {
    string name;
public:
    void setName(string n) {
        name = n;
    }
    void show() {
        cout << "Player Name: " << name << endl;
    }
};
class Batsman : public Cricketeer, public Player {
public:
    void inputData(string n, int r) {
        setName(n);
        setRuns(r);
    }
    void display() {
        Player::show();
        Cricketeer::show();
    }
};
int main() {
    Batsman b;
    b.inputData("Sachin Tendulkar", 100);
    b.display();
    return 0;
}
