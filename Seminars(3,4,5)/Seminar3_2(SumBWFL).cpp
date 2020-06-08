#include"Libraries.h"
#include"Prototypes.h"

void Seminar3_2()
{
	int size;

	while (true)
	{
		InputSize(size);

		float* arr = new float[size];

		InputElements(arr, size);
		float first = First(arr, size);
		float last = Last(arr, size);

		if (first == last)
		{
			cout << "Error. There is one negative element in the array." << endl;
			break;
		}
		if (1 + first == last)
		{
			cout << "Error. There are no elements between first and last negative elements." << endl;
			break;
		}
		if (2 + first == last)
		{
			cout << "Error. There is one element between first and last elements." << endl;
			break;
		}
		if (first == -1)
		{
			cout << "\n Error. There are no negative elements in the array.\n";
			break;
		}
		else
		{
			cout << "The number of the first negative element: " << first << "  The number of the last negative element: " << last << endl;
			cout << "The sum: " << SumBetweenFirstLast(arr, size) << endl;
			break;
		}
		delete[] arr;
	}
	
}