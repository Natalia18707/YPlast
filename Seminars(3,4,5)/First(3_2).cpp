#include"Libraries.h"
#include"Prototypes.h"

float First(float* arr, int size)
{
	float first = -1;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0.0)
		{
			first = i;
			break;
		}

	}
	return first;
}