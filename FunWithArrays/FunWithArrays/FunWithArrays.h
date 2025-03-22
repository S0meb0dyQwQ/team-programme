#ifndef FUNWITHARRAYS_H
#define FUNWITHARRAYS_H
template <typename T>
void InputArray(T* a, int32_t size) 
{
	for (int32_t i{}; i < size ; ++i) 
	{
		std::cin >> a[i];
	}
}
template <typename T>
void OutputArray(T* a, int32_t size) 
{
	for (int32_t i{}; i < size ; ++i)
	{
		std::cout << a[i] <<'\t';
	}
	std::cout << '\n';
}
template <typename T>
void BubbleSort(T* a, int32_t size, bool order)
{
	for (int32_t i{}; i < size - 1; ++i) 
	{
		for (int32_t j{}; j < size - i - 1; ++j)
		{
			if (a[j] > a[j + 1] && order) 
			{
				std::swap(a[j], a[j + 1]);
			}
			else if (a[j] < a[j + 1] && !order)
			{
				std::swap(a[j], a[j + 1]);
			}
		}
	}
	OutputArray(a, size);
}
template <typename T>
void ReverseArray(T* a, int32_t size)
{
	int32_t half_size{ size / 2 };
	for (int32_t i{}; i < half_size; ++i)
	{
		std::swap(a[i], a[size - 1 - i]);
	}
	OutputArray(a, size);
}
template <typename T>
void ResetNegative(T* a, int32_t size)
{
	for (int32_t i{}; i < size; ++i)
	{
		if (a[i] < 0) 
		{
			a[i] = 0;
			for (int32_t j{i}; j < size - 1; ++j)
			{
				std::swap(a[j], a[j + 1]);
			}
		}
	}
	OutputArray(a, size);
	/*T b[100];
	int32_t j{};
	for (int32_t i{}; i < size; ++i)
	{
		for (j; j < size; ++j)
		{
			if (a[j] >= 0) 
			{
				b[i] = a[j];
				break;
			}
		}
		if (j >= size - 1)
		{
			b[i] = 0;
		}
	}
	OutputArray(b, size);*/
}
void InputType(char&);
#endif
