#include <iostream>
using namespace std;

int main()
{
    string myName = "Abdullah";

    cout << "My Name (Variable) = " << myName << endl;
    cout << "My Name (Address) = " << &myName << endl;

    string* namePointer = &myName;
    cout << "My Name Pointer (Variable) = " << namePointer << endl;
    cout << "My Name Pointer (Address) = " << &namePointer << endl;

    *namePointer = "Bandar";

    cout << "My Name (Variable) = " << myName << endl;
    cout << "* Pointer (Variable) = " << *namePointer << endl;

    myName = "Ali";

    cout << "My Name (Variable) = " << myName << endl;
    cout << "* Pointer (Variable) = " << *namePointer << endl;
}