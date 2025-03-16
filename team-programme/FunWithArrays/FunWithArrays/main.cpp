#include <iostream>
#include "FunWithArrays.h"
//#include "4-6.h"
const int32_t MAX_SIZE{ 100 };
int main()
{
	int32_t size{};
	InputSize(size);
	if (!CheckSize(size))
	{
		std::cout << "wrong size\n";
	}
	char type{};
	std::cout << "choose int(i) double(d) or char(c)\n";
	switch (type)
	{
	case 'i':
		int32_t array[MAX_SIZE];
		InputArray(array, size);
		OutputArray(array, size);
		std::cout << "this is task ¹ 7 \n";
		BubbleSort(array, size);
		std::cout << "this is task ¹ 8 \n";
		ReverseArray(array, size);
		std::cout << "this is task ¹ 9 \n";
		/*ResetNegative(array, size);*/
	case 'd':
		double array_double[MAX_SIZE];
		InputArray(array_double, size);
		OutputArray(array_double, size);
		std::cout << "this is task ¹ 7 \n";
		BubbleSort(array_double, size);
		std::cout << "this is task ¹ 8 \n";
		ReverseArray(array_double, size);
		std::cout << "this is task ¹ 9 \n";
		/*ResetNegative(array, size);*/
	case 'c':
		char array_symb[MAX_SIZE];
		InputArray(array_symb, size);
		OutputArray(array_symb, size);

		std::cout << "this is task ¹ 7 \n";
		BubbleSort(array_symb, size);
		std::cout << "this is task ¹ 8 \n";
		ReverseArray(array_symb, size);
	default:
		std::cout << "wrong\n";
	}
	return 0;
}