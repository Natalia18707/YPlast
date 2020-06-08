#include"Libraries.h"
#include"Prototypes.h"

float SumBetweenFirstLast(float* arr, int size)
{
	float sumbetweenfl = 0;
	float first = First(arr, size);
	float last = Last(arr, size);

	for (int i = first + 1; i < last; i++)
		sumbetweenfl += arr[i];

	return sumbetweenfl;
}