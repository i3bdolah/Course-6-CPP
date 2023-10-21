#pragma warning(disable : 4996)

#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    time_t t = time(0);

    cout << t << endl;

    char* dt = ctime(&t);
    cout << "Local Date Now is : " << dt << endl;


    tm* gmtm = gmtime(&t);
    dt = asctime(gmtm);
    cout << "UTC Date Now is : " << dt << endl;
}
