#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream MyFile;
    MyFile.open("C:\\Users\\Abdullah\\source\\repos\\Course-6-CPP\\AppendMode\\Abdullah-Status.txt", ios::in);

    if (MyFile.is_open()) {


        string line;
       
        while (getline(MyFile, line))
            {
            cout << line << endl;
            }

        MyFile.close();
    }
    else
    {
        cout << "We Couldn't open the File" << endl;
    }
}