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

void SaveDataFromVectorToFile(string FilePath, vector <string>& vFileVector) {
    fstream MyFile;
    MyFile.open(FilePath, ios::out);

    if (MyFile.is_open()) {
        string line;
        for (string& line : vFileVector) {
            MyFile << line << endl;
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


    cout << "BEFORE EDIT =" << endl;
    for (string& line : vFamilyNames) {
        cout << line << endl;
    }

    vFamilyNames.push_back("Afiah");


    cout << "AFTER EDIT =" << endl;
    for (string& line : vFamilyNames) {
        cout << line << endl;
    }

    SaveDataFromVectorToFile("C:\\Users\\Abdullah\\Desktop\\FamilyNames.txt", vFamilyNames);
}