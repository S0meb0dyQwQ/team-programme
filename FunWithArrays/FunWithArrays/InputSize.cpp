#include <iostream>
#include "InputSize.h"
void InputSize(int32_t& size)
{
	std::cin >> size;
}
bool CheckSize(int32_t size)
{
	return 0 < size && size < 100;
}
