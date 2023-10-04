#include <iostream>
using namespace std;

int Fill2DimsArray(int arr[10][10]) {
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[i][j] = (i + 1) * (j + 1);
		}
	}

	return arr[10][10];
}

void Print2DimsArray(int arr[10][10]) {
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%0*d ", 3, arr[i][j]);
		}
		cout << "\n";
	}
}

int main()
{
    int TwoDimesArray[10][10];

	Fill2DimsArray(TwoDimesArray);
	Print2DimsArray(TwoDimesArray);
}
