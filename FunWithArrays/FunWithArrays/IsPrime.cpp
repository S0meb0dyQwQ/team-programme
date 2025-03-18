#include <iostream>
#include "Glushkovpart.h"
bool IsPrime(int32_t number) {
	double root{ sqrt(number) };
	for (int32_t i{2}; i < root; ++i) {
		if (number % i == 0) {
			return 0;
		}
	}
	return 1;
}
