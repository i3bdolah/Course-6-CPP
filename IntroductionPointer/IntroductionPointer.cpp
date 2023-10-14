#include <iostream>
using namespace std;

int main()
{
    string myName = "Abdullah";

    cout << "My Name (Varaible) = " << myName << endl;
    cout << "My Name (Address) = " << &myName << endl;

    string * namePointer = &myName;
    cout << "My Name Pointer (Variable) = " << namePointer << endl;
    cout << "My Name Pointer (Address) = " << &namePointer << endl;
}