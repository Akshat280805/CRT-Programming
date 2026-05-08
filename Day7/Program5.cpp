//WAP in C++ for hirarchical inheritance with class like cricketer havinf multiple child class.
#include <iostream>
using namespace std;
int main() {
    class Player {
        public:
        string name;
        int age;
        void setData(string n, int a) {
            name = n;
            age = a;
        }
        void showData() {
            cout << "Player Name: " << name << endl;
            cout << "Player Age: " << age << endl;
        }
    };
    class footboller : public Player {
        public:
        int goals;
        void setGoals(int g) {
            goals = g;
        }
        void showGoals() {
            cout << "Goals scored: " << goals << endl;
        }
    };
    class Cricketer : public Player {
        public:
        int runs;
        void setRuns(int r) {
            runs = r;
        }
        void showRuns() {
            cout << "Runs scored: " << runs << endl;
    };
    footboller f;
    f.setData("Lionel Messi", 34);
    f.setGoals(30);
    f.showData();
    f.showGoals();
    cout << endl;
    Cricketer c;
    c.setData("Sachin Tendulkar", 47);
    c.setRuns(100);
    c.showData();
    c.showRuns();
    return 0;
}


    
