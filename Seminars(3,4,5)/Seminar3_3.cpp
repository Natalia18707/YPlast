#include"Libraries.h"
#include"Libraries.h"
#include"Prototypes.h"

void Seminar3_3()

{
	int size;
	InputSize(size);
	

	float* arr = new float[size];

	InputElements(arr, size);

	Sort(arr, size);

	delete[] arr;

}