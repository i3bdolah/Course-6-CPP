#include <iostream>
using namespace std;

int main()
{
    int TwoDimesArray[5][2] = {
        {1 , 2},
        {3 , 4},
        {5 , 6},
        {7 , 8},
        {9 , 10},
    };

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("[%d , %d] = %d ", i, j, TwoDimesArray[i][j]);
        }
        cout << "\n";
    }
}
