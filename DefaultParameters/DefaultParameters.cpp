#include <iostream>
using namespace std;

int AddingOperation(int a = 0, int b = 0) {
    return a + b;
}

double AddingOperation(double a = 0, double b = 0) {
    return a + b;
}

int main()
{
    cout << AddingOperation(10.5) << endl;
    cout << AddingOperation(10, 10) << endl;
}