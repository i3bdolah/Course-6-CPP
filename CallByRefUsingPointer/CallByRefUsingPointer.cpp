#include <iostream>
using namespace std;

void swap(int *n1, int *n2) {
    int temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int a, b;
    a = 10;
    b = 20;

    cout << a << endl;
    cout << b << endl;
    cout << "---------AFTER SWAPPING---------" << endl;


    swap(&a, &b);

    cout << a << endl;
    cout << b << endl;
}