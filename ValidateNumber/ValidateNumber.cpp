#include <iostream>
using namespace std;

int readNumber() {
    int num;

    cout << "Enter your number : ";
    cin >> num;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "\nInvalid Input, Re-Enter your number : ";
        cin >> num;
    }
    return num;
}

int main()
{
    cout << "Your number is = " << readNumber();
}