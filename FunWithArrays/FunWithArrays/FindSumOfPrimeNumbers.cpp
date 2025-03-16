#include <iostream>
#include "Glushkovpart.h"
int32_t FindSumOfPrimeNumbers(int32_t* array, int32_t size) {
	int32_t sumOfPrimeNumbers{};
	for (int32_t i{}; i < size; ++i) {
		if (IsPrime(array[i])) {
			sumOfPrimeNumbers += array[i];
		}
	}
	return sumOfPrimeNumbers;
}
