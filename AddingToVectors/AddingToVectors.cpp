#include <iostream>
#include <vector>
using namespace std;

void EnterUserNumbers(vector <int> &userNumbers) {
    char addNumber = 'y';
    int userInput = 0;

    do
    {
        cout << "\nEnter Your Number : ";
        cin >> userInput;

        userNumbers.push_back(userInput);

        cout << "\Proceed ? [Y/N] : ";
        cin >> addNumber;
    } while (addNumber == 'y' || addNumber == 'Y');

}

void PrintVector(vector <int> &vect) {
    for (int &number : vect) {
        cout << number << endl;
    }
}

int main()
{
    vector <int> userNumbers;
    EnterUserNumbers(userNumbers);
    PrintVector(userNumbers);
}
