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

// Abu-Hadhoud Solution, which is fabulous and briliant.
int MyPower(int base, int power) {
	if (power == 0) {
		return 1;
	}
	else {
		return (base * MyPower(base, power - 1));
	}
}
int main()
{
	PrintNumbersInRange(1, 5);
	cout << "_____________________" << endl;
	PrintNumbersInRange(1, 5);
	cout << "_____________________" << endl;
	PrintPowerNumber(2, 8);
	cout << "_____________________" << endl;
	cout << MyPower(2, 8) << endl;
}
