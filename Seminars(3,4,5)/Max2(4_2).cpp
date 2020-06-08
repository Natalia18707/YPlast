#include"Libraries.h"
#include"Prototypes.h"

int Max2(int** arr, int col, int row)
{
	int max2 = INT_MIN;

	for (int i = 0; i < col - 1; i++)
	{
		int sum = 0;

		for (int j = 0; j < i + 1; j++)
		{
			sum += arr[j + col - 1 - i][j];
		}

		max2 = sum;

	}
	return max2;
}