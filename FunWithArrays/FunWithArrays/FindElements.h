#ifndef FINDELEMENTS_H
#define FINDELEMENTS_H
#include <iostream>
template <typename T>
void InputNum(T& number) 
{
	std::cout << "input number\n";
	std::cin >> number;
}
template <typename T>
int32_t FindElement(T element, T* array, int32_t size) {
	int32_t position{ -1 };
	for (size_t i = 0; i < size; ++i) {
		if (array[i] == element) {
			position = i;
		}
	}
	return position;
}
#endif
