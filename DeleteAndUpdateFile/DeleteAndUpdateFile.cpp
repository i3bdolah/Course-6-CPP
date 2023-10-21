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

void PrintDataFromVector(vector <string> vFileVector) {
    for (string& element : vFileVector) {
        cout << element << endl;
    }
}

void UpdateLineInFile(string FilePath, string Record, string UpdateTo) {
    vector <string> vFileVector;
    LoadDataFromFileToVector(FilePath, vFileVector);

    PrintDataFromVector(vFileVector);
    for (string &Line : vFileVector)
    {
        if (Line == Record)
        {
            Line = UpdateTo;
        }
    }
    SaveDataFromVectorToFile(FilePath, vFileVector);
    cout << "_________________________" << endl;
    cout << "Data Successfully Saved!" << endl;
    cout << "_________________________" << endl;
    PrintDataFromVector(vFileVector);
}

int main()
{
    UpdateLineInFile("C:\\Users\\Abdullah\\Desktop\\FamilyNames.txt", "Edited to: Afiah Nasser", "Afiah Nasser");
}