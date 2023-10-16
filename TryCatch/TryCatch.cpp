#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> nums = {1,3,5,7,9};

	try {
		cout << nums.at(1) << endl;
		cout << nums.at(10) << endl;
	}
	catch (...) {
		cout << "bound exceeded." << endl;
	}

}
