#include"Libraries.h"
#include"Prototypes.h"

int Max(int max1, int max2)
{
	int max = INT_MIN;

	max = max1;
	if (max < max2)
		max = max2;

	return max;
}