#include <iostream>
int32_t FindElement(int32_t element, int32_t* array, int32_t size) {
	int32_t position{-1};
	for (size_t i = 0; i < size; ++i) {
		if (array[i] == element) {
			position = i;
		}
	}
	return position;
}
int32_t FindElement(double element, double* array, int32_t size) {
	int32_t position{ -1 };
	for (size_t i = 0; i < size; ++i) {
		if (array[i] == element) {
			position = i;
		}
	}
	return position;
}
int32_t FindElement(char element, char* array, int32_t size) {
	int32_t position{ -1 };
	for (size_t i = 0; i < size; ++i) {
		if (array[i] == element) {
			position = i;
		}
	}
	return position;
}