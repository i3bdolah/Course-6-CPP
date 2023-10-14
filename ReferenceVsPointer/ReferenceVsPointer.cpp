#include <iostream>
using namespace std;

int main()
{
    string myName = "Abdullah";
    string &aliasMyName = myName;

    cout << "myName (Variable) = " << myName << endl;
    cout << "myName (Address) = " << &myName << endl;
    cout << "______________________________" << endl;
    cout << "aliasMyName (Variable) = " << aliasMyName << endl;
    cout << "aliasMyName (Address) = " << &aliasMyName << endl;

    cout << "\n\n______________________________\n\n" << endl;


    string* myNamePointer = &myName;
    cout << "My Name Pointer (Variable) = " << myNamePointer << endl;
    cout << "My Name Pointer (Address) = " << &myNamePointer << endl;
}