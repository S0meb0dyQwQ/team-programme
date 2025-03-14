#include <iostream>
#include "FunWithArrays.h"
#include "SomethingThatNotTemplate.h"
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
	InputArray(array, size);
	OutputArray(array, size);

	char array_symb[MAX_SIZE];
	int32_t size_symb{ };
	InputSize(size_symb);
	if (!CheckSize(size_symb))
	{
		std::cout << "wrong size\n";
	}
	InputArray(array_symb, size_symb);
	OutputArray(array_symb, size_symb);

	
	BubbleSort(array, size);
	BubbleSort(array_symb, size_symb);
	
	ReverseArray(array, size);
	ReverseArray(array_symb, size_symb);
	
	ResetNegative(array, size);
	return 0;
}