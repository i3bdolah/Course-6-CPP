#include <iostream>
using namespace std;

int main()
{
    void * myPointer;
    int num1 = 187;
    double num2 = 18.7;

    myPointer = &num1;


    cout << "num1 = " << num1 << endl;
    cout << "&num1 = " << &num1 << endl;
    cout << "myPointer = " << myPointer << endl;
    cout << "&myPointer = " << &myPointer << endl;
    cout << "*myPointer = " << *(static_cast<int*>(myPointer)) << endl;
    cout << "\n------------------------------------\n" << endl;

    myPointer = &num2;

    cout << "num2 = " << num2 << endl;
    cout << "&num2 = " << &num2 << endl;
    cout << "myPointer = " << myPointer << endl;
    cout << "&myPointer = " << &myPointer << endl;
    cout << "*myPointer = " << *(static_cast<double*>(myPointer)) << endl;

}