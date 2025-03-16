#include <iostream>
void PrintArray(int32_t* array, int32_t size) {
	for (size_t i = 0; i < size; ++i) {
		std::cout << array[i] << ' ';
	}
	std::cout << '\n';
}
void PrintArray(double* array, int32_t size) {
	for (size_t i = 0; i < size; ++i) {
		std::cout << array[i] << ' ';
	}
	std::cout << '\n';
}
void PrintArray(char* array, int32_t size) {
	for (size_t i = 0; i < size; ++i) {
		std::cout << array[i] << ' ';
	}
	std::cout << '\n';
}