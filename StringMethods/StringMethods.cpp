#include <iostream>
#include <string>
using namespace std;

int main()
{
    string msg = "Hello, I'm Abdullah. How you doing?";

    cout << msg.length() << endl;
    
    cout << msg.at(5) << endl;
    
    msg.append(" @iabdullahban");
    cout << msg << endl;

    msg.insert(19, " Bander");
    cout << msg << endl;

    cout << msg.substr(11, 15) << endl;

    msg.push_back('!');
    cout << msg << endl;

    msg.pop_back();
    cout << msg << endl;

    cout << msg.find("Abdullah") << endl;

    cout << msg.find("@iAbdullahBAN") << endl;

    if (msg.find("@iAbdullahBAN") == msg.npos)
    {
        cout << "Not Found!" << endl;
    }
}