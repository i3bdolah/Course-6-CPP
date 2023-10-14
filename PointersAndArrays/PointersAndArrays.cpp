#include <iostream>
using namespace std;

int main()
{
    int array[4] = {6,7,8,9};
    int* myPointer;
    myPointer = array;

    cout << "myPointer = " << myPointer << endl;
    cout << "*myPointer = " << *myPointer << endl;
    cout << "\n---------ADDING---------\n" << endl;
    cout << "myPointer = " << myPointer + 1 << endl;
    cout << "*myPointer = " << *(myPointer + 1)<< endl;
    cout << "\n---------ADDING---------\n" << endl;
    cout << "myPointer = " << myPointer + 2 << endl;
    cout << "*myPointer = " << *(myPointer + 2) << endl;
    cout << "\n---------ADDING---------\n" << endl;
    cout << "myPointer = " << myPointer + 3 << endl;
    cout << "*myPointer = " << *(myPointer + 3) << endl;
}