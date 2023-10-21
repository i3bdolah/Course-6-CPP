#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void LoadDataFromFileToVector(string FilePath, vector <string>& vFileVector) {
    fstream MyFile;
    MyFile.open(FilePath, ios::in);

    if (MyFile.is_open()) {
        string line;
        while (getline(MyFile, line))
        {
            vFileVector.push_back(line);
        }
        MyFile.close();
    }
    else
    {
        cout << "We Couldn't open the File" << endl;
    }
}

int main()
{
    vector <string> vFamilyNames;
    LoadDataFromFileToVector("C:\\Users\\Abdullah\\Desktop\\FamilyNames.txt", vFamilyNames);

    for (string& line : vFamilyNames) {
        cout << line << endl;
    }

    
    cout << vFamilyNames.front() << endl;
}