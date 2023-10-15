#include <iostream>
using namespace std;

int main()
{
	string* firstName;
	string* shourtName;

	firstName = new string;
	shourtName = new string;

	cout << "Enter your firstName : " << endl;
	cin >> *firstName;


	cout << "Enter your shourtName : " << endl;
	cin >> *shourtName;

	if (*shourtName == "nothing")
	{
		delete shourtName;
	}

	cout << *firstName << " - " << *shourtName << endl;
	
}
