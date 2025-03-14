#include <iostream>
bool IsPrime(int32_t number) {
	for (int32_t i{}; i < number; ++i) {
		if (number % i == 0) {
			return 0;
		}
	}
	return 1;
}
