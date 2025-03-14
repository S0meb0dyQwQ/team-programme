#include <iostream>
#include "MaxElement.h"
#include "MinElement.h"
template <typename Type>
Type CalculateAverage(Type* array, int32_t size) {
	return (array[MaxElement - 1] - array[MinElement - 1]) / 2
}
