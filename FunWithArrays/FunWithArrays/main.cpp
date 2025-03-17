#include <iostream>
#include "FunWithArrays.h"
#include "Glushkovpart.h"
#include "PrintArray.h"
#include "FindElements.h"
#include "CountElements.h"
const int32_t MAX_SIZE{ 100 };
int main()
{
	int32_t array[MAX_SIZE];
	int32_t size{};
	std::cout << "input size\n";
	InputSize(size);
	if (!CheckSize(size))
	{
		std::cout << "wrong size\n";
	}

	char type{};
	InputType(type);

	switch (type)
	{
	case 'i':
		int32_t array[MAX_SIZE];
		std::cout << "input array\n";
		InputArray(array, size);

		std::cout << "here is your array\n"; 
		PrintArray(array, size);                                
		std::cout << "i found position of your number\n" << FindElement(array, size) << '\n';
		std::cout << " i count numbers between nulls :" << CountElements(array, size) << '\n';

		std::cout << "position of max:" << MaxElement(array, size) << '\n';
		std::cout << "position of min" << MinElement(array, size) << '\n';
		std::cout << "there is average:" << CalculateAverage(array, size) << '\n';
		std::cout << "sum of prime numbers:" << FindSumOfPrimeNumbers(array, size) << '\n';

		std::cout << "i'll sort array\n";
		BubbleSort(array, size);
		std::cout << "i flipped array\n";
		ReverseArray(array, size);
		std::cout << "i erased negative numbers\n";
		ResetNegative(array, size);
		break;
	case 'd':
		double array_double[MAX_SIZE];
		std::cout << "input array\n";
		InputArray(array_double, size);

		std::cout << "here is your array\n";
		PrintArray(array_double, size);
		std::cout << "i found position of your number\n" << FindElement(array_double, size) << '\n';
		std::cout << " i count numbers between nulls :" << CountElements(array_double, size) << '\n';

		std::cout << "position of max:" << MaxElement(array_double, size) << '\n';
		std::cout << "position of min" << MinElement(array_double, size) << '\n';
		std::cout << "there is average:" << CalculateAverage(array_double, size) << '\n';

		std::cout << "i'll sort array\n";
		BubbleSort(array_double, size);
		std::cout << "i flipped array\n";
		ReverseArray(array_double, size);
		std::cout << "i erased negative numbers\n";
		ResetNegative(array_double, size);
		break;
	case 'c':
		char array_symb[MAX_SIZE];
		std::cout << "input array\n";
		InputArray(array_symb, size);

		std::cout << "here is your array\n";
		PrintArray(array_symb, size);
		std::cout << "i found position of your number\n" << FindElement(array_symb, size) << '\n';
		std::cout << " i count numbers between nulls:" << CountElements(array_symb, size) << '\n';

		std::cout << "position of max:" << MaxElement(array_symb, size) << '\n';
		std::cout << "position of min" << MinElement(array_symb, size) << '\n';

		std::cout << "i'll sort array\n";
		BubbleSort(array_symb, size);
		std::cout << "i flipped array\n";
		ReverseArray(array_symb, size);
		break;
	default:
		std::cout << "wrong type\n";
		break;
	}

	return 0;
}