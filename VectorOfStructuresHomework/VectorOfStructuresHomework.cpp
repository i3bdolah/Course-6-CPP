#include <iostream>
#include <vector>
using namespace std;

struct stEmployee
{
    string name;
    int age;
    float salary;
};


void EnterUserNumbers(vector <stEmployee> &userVector) {
    char addEmployee = 'y';
    stEmployee userEmployee;

    do
    {
        cout << "Enter Name : ";
        cin >> userEmployee.name;
        cout << "Enter Age : ";
        cin >> userEmployee.age;
        cout << "Enter Salary : ";
        cin >> userEmployee.salary;

        userVector.push_back(userEmployee);

        cout << "\nProceed ? [Y/N] : ";
        cin >> addEmployee;
    } while (addEmployee == 'y' || addEmployee == 'Y');

}

void PrintVector(vector <stEmployee> &userVector) {
    for (stEmployee &element : userVector) {
        cout << "Name : " << element.name << endl;
        cout << "Age : " << element.age << endl;
        cout << "Salary : " << element.salary << endl;
        cout << "\n";
    }
}

int main()
{
    vector <stEmployee> vEmployees;
    EnterUserNumbers(vEmployees);
    PrintVector(vEmployees);
}
