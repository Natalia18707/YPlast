#include"Libraries.h"
#include"Libraries.h"
#include"Prototypes.h"

void Seminar3_3()

{
	int size;
	InputSize(size);
	

	float* arr = new float[size];

	InputElements(arr, size);

	Compress(arr, size);



	/*float* arr2 = new float[n];

	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (abs(arr[i]) >= 1)
		{
			arr2[j] = arr[i];
			j++;
		}

	}

	for (int i = j; j < n; j++)
	{
		arr2[j] = 0;
	}



	for (int i = 0; i < n; i++)
	{
		if (arr[i] == arr2[i])
			cout << "Error. The module of each element is greater than 1.";
		else
			cout << arr2[i] << "  ";
	}
	*/
}