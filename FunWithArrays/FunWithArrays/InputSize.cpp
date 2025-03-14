#include <iostream>
#include "SomethingThatNotTemplate.h"
void InputSize(int32_t& size)
{
	std::cin >> size;
}
bool CheckSize(int32_t size)
{
	return 0 < size < 100;
}
