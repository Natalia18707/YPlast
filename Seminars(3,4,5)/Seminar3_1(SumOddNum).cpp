#include"Libraries.h"
#include"Prototypes.h"

void Seminar3_1()
{

	//float sum1 = 0;
	int size;
	

	while (true)
	{
		InputSize(size);
		if (size < 4)
			cout << "This size can not be used in this option. Please, enter the size > 3" << endl;
		else
			break;
		
	}

	float* arr = new float[size];
	
	InputElements(arr, size);

		cout << "The sum: " << SumOddNum(arr, size) << endl;
         delete[] arr;
	
	
}
