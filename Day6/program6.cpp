//Write a function to create area class where you are printing multiple area of different shapes like rectangle or circle and for that you will have to overwrite the constructor also if user dont give any input then make area of that perticluar shape 0.
#include <iostream>
using namespace std;

class Area
{
private:
    float area;

public:
    Area()
    {
        area = 0;
    }
    Area(float length, float breadth)
    {
        area = length * breadth;
    }
    Area(float radius)
    {
        area = 3.14 * radius * radius;
    }
    Area(float base, float height, int)
    {
        area = 0.5 * base * height;
    }
    Area(int side)
    {
        area = side * side;
    }

    void display()
    {
        cout << "Area = " << area << endl;
    }
};

int main()
{
    int choice;

    cout << "Choose Shape:\n";
    cout << "1. Rectangle\n2. Circle\n3. Triangle\n4. Square\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        float l, b;
        cout << "Enter length and breadth: ";
        cin >> l >> b;
        Area obj(l, b);
        obj.display();
    }
    else if (choice == 2)
    {
        float r;
        cout << "Enter radius: ";
        cin >> r;
        Area obj(r);
        obj.display();
    }
    else if (choice == 3)
    {
        float base, height;
        cout << "Enter base and height: ";
        cin >> base >> height;
        Area obj(base, height, 0); 
        obj.display();
    }
    else if (choice == 4)
    {
        int side;
        cout << "Enter side: ";
        cin >> side;
        Area obj(side);
        obj.display();
    }
    else
    {
        Area obj; // default → area = 0
        cout << "Invalid choice!\n";
        obj.display();
    }

    return 0;
}