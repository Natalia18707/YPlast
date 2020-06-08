#include"Libraries.h"
#include"Prototypes.h"

void Seminar4_2()
{
	int col;
	int row;
	InputSize4(col, row);

	int** arr = new int* [col];
	for (int i = 0; i < col; i++)
	{
		arr[i] = new int[col];
	}

	InputElements4(arr, col, row);

	int max1 = Max1(arr, col, row);
	int max2 = Max2(arr, col, row);

	if (max1 == max2)
		cout << "All sums are the same: " << max1 << endl;
	else
		cout << "The max sum = " << Max(max1, max2) << endl;

	for (int i = 0; i < col; i++)
		delete arr[i];
	delete[] arr;
	arr = NULL;
}
