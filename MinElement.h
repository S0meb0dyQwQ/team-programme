#include <iostream>
template <typename Type>
int32_t MinElement(Type* array, int32_t size) {
	Type minElement{ array[0] };
	int32_t numberOfPosition{ 1 };
	for (size_t i{}; i < size; ++i) {
		if (array[i] < minElement) {
			minElement = array[i];
			numberOfPosition = i + 1;
		}
	}
	return numberOfPosition;
}
