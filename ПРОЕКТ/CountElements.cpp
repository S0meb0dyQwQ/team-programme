#include <iostream>
int32_t CountElements(int32_t* array, int32_t size) {
	int32_t first_zero_pos{ -1 };
	size_t i{};
	while (first_zero_pos == -1 && i < size) {
		if (array[i] == 0) {
			first_zero_pos = i;
			int32_t second_zero_pos{};
			++i;
			for (i; i < size; ++i) {
				if (array[i] == 0) {
					second_zero_pos = i;
					return second_zero_pos - first_zero_pos - 1;
				}
			}
			return -1;
		}
		++i;
	}
	return -1;
}
int32_t CountElements(double* array, int32_t size) {
	int32_t first_zero_pos{ -1 };
	size_t i{};
	while (first_zero_pos == -1 && i < size) {
		if (array[i] == 0) {
			first_zero_pos = i;
			int32_t second_zero_pos{};
			++i;
			for (i; i < size; ++i) {
				if (array[i] == 0) {
					second_zero_pos = i;
					return second_zero_pos - first_zero_pos - 1;
				}
			}
			return -1;
		}
		++i;
	}
	return -1;
}
int32_t CountElements(char* array, int32_t size) {
	int32_t first_zero_pos{ -1 };
	size_t i{};
	while (first_zero_pos == -1 && i < size) {
		if (array[i] == '0') {
			first_zero_pos = i;
			int32_t second_zero_pos{};
			++i;
			for (i; i < size; ++i) {
				if (array[i] == '0') {
					second_zero_pos = i;
					return second_zero_pos - first_zero_pos - 1;
				}
			}
			return -1;
		}
		++i;
	}
	return -1;
}