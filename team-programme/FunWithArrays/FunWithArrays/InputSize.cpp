#include <iostream>
#include "FunWithArrays.h"
void InputSize(int32_t& size)
{
	std::cout <<"input size\n";
	std::cin >> size;
}
bool CheckSize(int32_t size)
{
	return 0 < size < 100;
}
