//Write a C++ program to perform different operations on an array:
//Initialize and display array elements using a loop.
//Access array elements directly using index numbers.
//Find the size of the array.
//Take array elements as input from the user using loops and display them.
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1,2,3,4,5};
    cout << "Array elements are:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    cout << "Accessing elements using index:" << endl;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
    cout << endl;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Size of array: " << size << endl;
    cout << endl;
    int arr2[5];
    cout << "Enter 5 elements:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> arr2[i];
    }
    cout << "User entered elements are:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}