#include <iostream>
using namespace std;

void PrintNumbersInRange(int from, int to) {

	if (from <= to)
	{
		cout << from << endl;
		PrintNumbersInRange(from + 1, to);
	}
}

void PrintNumbersInRangeReverse(int from, int to) {

	if (from >= to)
	{
		cout << from << endl;
		PrintNumbersInRangeReverse(from - 1, to);
	}
}

void PrintPowerNumber(int num, int power, int counter = 1, int originalNum = 0) {

	if (counter > power)
	{
		cout << num << endl;
	}
	else
	{
		if (counter == 1) {
			PrintPowerNumber(num, power, counter = 2, num);
		}
		else
		{
		PrintPowerNumber(num * originalNum, power, counter + 1, originalNum);
		}
	}
}

int main()
{
	PrintNumbersInRange(1, 5);
	cout << "_____________________" << endl;
	PrintNumbersInRange(1, 5);
	cout << "_____________________" << endl;
	PrintPowerNumber(2, 8);
}
