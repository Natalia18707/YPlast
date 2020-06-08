#include"Libraries.h"
#include"Prototypes.h"

void Seminar4_1()
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

	int prod = 1;
	int counter = 0;
	int countErorr = 0;

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			prod *= arr[i][j];

			if (arr[i][j] < 0)
				counter++;
		}
		if (counter == 0)
			cout << "The row: "<< i << "  " << "The product= " << prod << endl;
		else
			countErorr++;

		counter = 0;
		prod = 1;
	}

	if (countErorr == row)
		cout << "Erorr!There are no rows without negative elements.";

		
	for (int i = 0; i < col; i++)
		delete arr[i];
	delete[] arr;
	arr = NULL;
}