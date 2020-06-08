#include"Libraries.h"
#include"Prototypes.h"

float SumOddNum(float* arr, int size)
{
	float sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 1)
		{
			sum += arr[i];

			cout << "The element: " << arr[i] << " The number: " << i << endl;
		}
	}

	return sum;

}