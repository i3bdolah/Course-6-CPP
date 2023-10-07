#include <iostream>
#include <vector>
using namespace std;

struct stEmployee
{
    string name;
    int age;
    float salary;
};

int main()
{
    vector <stEmployee> vEmployee;
    stEmployee tempEmployee;

    tempEmployee.name = "Abdullah Al-Shehri";
    tempEmployee.age = 23;
    tempEmployee.salary = 9000;
    vEmployee.push_back(tempEmployee);

    tempEmployee.name = "Alanoud Al-Shehri";
    tempEmployee.age = 34;
    tempEmployee.salary = 18300;
    vEmployee.push_back(tempEmployee);

    tempEmployee.name = "Hisham Amoudi";
    tempEmployee.age = 27;
    tempEmployee.salary = 14000;
    vEmployee.push_back(tempEmployee);


    // Printing Data
    for (stEmployee& employee : vEmployee) {
        cout << "Name : " << employee.name << endl;
        cout << "Age : " << employee.age << endl;
        cout << "Salary : " << employee.salary << endl;
        cout << "\n\n";
    }
}
