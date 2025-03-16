#include <iostream>
#include "FunWithArrays.h"
#include "SomethingThatNotTemplate.h"
#include "Glushkovpart.h"
const int32_t MAX_SIZE{ 100 };
int main()
{
	int32_t array[MAX_SIZE];
	int32_t size{};
	InputSize(size);
	if (!CheckSize(size))
	{
		std::cout << "wrong size\n";
	}

	char type{};
	switch (type)
	{
	case 'i':
		int32_t array[MAX_SIZE];
		InputArray(array, size);
		OutputArray(array, size);

		std::cout << MaxElement(array, size) << '\n';
		std::cout << MinElement(array, size) <<'\n';
		std::cout << CalculateAverage( array, size) << '\n';

		BubbleSort(array, size);
		ReverseArray(array, size);
		ResetNegative(array, size);
	case 'd':
		double array_double[MAX_SIZE];
	case 'c':
		char array_symb[MAX_SIZE];
		InputArray(array_symb, size);
		OutputArray(array_symb, size);
		BubbleSort(array_symb, size);
		ReverseArray(array_symb, size);
	default:
		std::cout << "wrong type\n";
	}

	return 0;
}