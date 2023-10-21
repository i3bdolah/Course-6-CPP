#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream MyFile;

    MyFile.open("Abdullah-Status.txt", ios::out | ios::app);

    if (MyFile.is_open()) {
        MyFile << "Abdullah Al-Shehri Started Mastering Programming.\n";
        MyFile << "Well Done!!!\n\n";

        MyFile.close();
    }
}