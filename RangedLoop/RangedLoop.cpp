#include <iostream>
using namespace std;


int main()
{
	string arr[3] = { "Abdullah", "Ahmed", "Ali" };

	//for (size_t i = 0; i < arr; i++)
	//{
	//	cout << arr[i] << endl;
	//}

	for (string name : arr) {
		cout << name << endl;
	}
}
