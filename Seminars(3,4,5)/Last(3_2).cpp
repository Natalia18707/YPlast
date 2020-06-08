#include"Libraries.h"
#include"Prototypes.h"

float Last(float* arr, int size)
{
	float last = -10;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0.0)
		{
			last = i;

		}

	}
	return last;
}