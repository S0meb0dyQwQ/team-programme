#ifndef GLUSHKOVPART_H
#define GLUSHKOVPART_H
#include <iostream>

template <typename Type>
int32_t MaxElement(Type* array, int32_t size) {
	Type maxElement{ array[0] };
	int32_t numberOfPosition{ 1 };
	for (size_t i{}; i < size; ++i) {
		if (array[i] > maxElement) {
			maxElement = array[i];
			numberOfPosition = i + 1;
		}
	}
	return numberOfPosition;
}
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
template <typename Type>
double CalculateAverage(Type* array, int32_t size) {
	int32_t minIndex{MinElement(array, size)};
	int32_t maxIndex{MaxElement(array, size)};
	Type sumOfElements{};
	int32_t counterOfElements{};
	if (maxIndex < minIndex) {
		std::swap(minIndex, maxIndex);
	}
	for (int32_t i{ minIndex - 1}; i < maxIndex; ++i) {
		sumOfElements += array[i];
		++counterOfElements;
	}
	return 1.0*sumOfElements/counterOfElements;
}

bool IsPrime(int32_t number);

int32_t FindSumOfPrimeNumbers(int32_t* array, int32_t size);

#endif

