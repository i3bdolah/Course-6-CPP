// Vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    
    vector <int> vNumbers = { 1, 3, 56, 6, 10, 29 };

    cout << "Vector Numbers :";

    
    //for (int number : vNumbers) {
    
    // Adding & will improve the performance because the computer does not need to copy it. Just go to the address in the memory.
    for (int &number : vNumbers) {
        cout << " " << number;
    }

    cout << "." << endl;
}
