#include <iostream>
#include "PrintArray.h"
#include "FindElement.h"
#include "CountElements.h"
int main() {
	int32_t size{};
	std::cin >> size;
	char array[100]{};
	for (size_t i = 0; i < size; ++i) {
		std::cin >> array[i];
	}
	std::cout << CountElements(array, size);
	return 0;
	PrintArray(array, size);
	int32_t e{};
	std::cin >> e;
	std::cout << FindElement(e, array, size) << '\n';
}