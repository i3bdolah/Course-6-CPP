#include <iostream>
using namespace std;

struct Employee
{
    string name;
    int age = 18;
    bool isMarried = false;
};

int main()
{
    Employee emp1, *myPointer;
    emp1.name = "Abdullah";
    emp1.age = 23;
    emp1.isMarried = false;

    myPointer = &emp1;


    cout << "emp1 = " << emp1.name << endl;
    cout << "emp1 = " << emp1.age << endl;
    cout << "emp1 = " << emp1.isMarried << endl;
    cout << "\n------------------------------------\n" << endl;
    cout << "myPointer-> = " << myPointer->name << endl;
    cout << "myPointer-> = " << myPointer->age << endl;
    cout << "myPointer-> = " << myPointer->isMarried << endl;

}