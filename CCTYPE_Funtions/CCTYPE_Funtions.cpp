#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char x, y;

    x = tolower('X');
    y = toupper('y');

    cout << "tolower('X') = " << x << endl;
    cout << "toupper('y') = " << y << endl;

    cout << endl;

    cout << "islower(x) = " << islower(x) << endl;
    cout << "isupper(y) = " << isupper(y) << endl;

    cout << endl;

    cout << "isdigit('8') = " << isdigit('8') << endl;
    cout << "isdigit('A') = " << isdigit('A') << endl;

    cout << endl;

    cout << "ispunct('/') = " << ispunct('/') << endl;
    cout << "ispunct('A') = " << ispunct('A') << endl;


}