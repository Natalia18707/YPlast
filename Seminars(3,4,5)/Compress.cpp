#include"Libraries.h"
#include"Prototypes.h"

void Compress(float* arr, int size)
{
	float* arr2 = new float[size];

	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (abs(arr[i]) >= 1)
		{
			arr2[j] = arr[i];
			j++;
		}

	}

	for (int i = j; j < size; j++)
	{
		arr2[j] = 0;
	}



	for (int i = 0; i < size; i++)
	{
		if (arr[i] == arr2[i])
		{
			cout << "Error. The module of each element is greater than 1.";
			break;
		}
		else
			cout << arr2[i] << "  ";
			
	}
}