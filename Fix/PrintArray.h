template <typename T>
void PrintArray(T* array, int32_t size) {
	for (size_t i{}; i < size; ++i) {
		std::cout << array[i] << '\t';
	}
	std::cout << '\n';
}