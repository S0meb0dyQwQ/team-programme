#include <iostream>
#include "PrintArray.h"
#include "FindElement.h"
#include "CountElements.h"
int main() {
	int32_t size{};
	std::cin >> size;
	double array[100]{};
	for (size_t i = 0; i < size; ++i) {
		std::cin >> array[i];
	}
	std::cout << CountElements(array, size);
	PrintArray(array, size);
	double e{};
	std::cin >> e;
	std::cout << FindElement(e, array, size) << '\n';
	return 0;
}