#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <string> jedcoTeam = {"Al-Anoud", "Safiah", "Hisham", "Nadia", "Abdullah", "Malak", "Mohammed"};

    cout << "Before Pop =" << endl;
    for (string &name : jedcoTeam) {
        cout << name << endl;
    }

    jedcoTeam.pop_back();
    cout << "\n\nAfter Pop =" << endl;
    for (string& name : jedcoTeam) {
        cout << name << endl;
    }


    cout << "\n\nFunctions =" << endl;
    cout << "Front : " << jedcoTeam.front() << endl;
    cout << "Last : " << jedcoTeam.back() << endl;
    cout << "Size : " << jedcoTeam.size() << endl;
    cout << "Capacity : " << jedcoTeam.capacity() << endl;



}