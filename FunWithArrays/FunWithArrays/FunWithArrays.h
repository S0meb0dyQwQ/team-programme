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
void SomeKindOfBubbleSort(T* a, int32_t size)
{
	for (int32_t i{}; i < size - 1; ++i)
	{
		for (int32_t j{}; j < size - i - 1; ++j)
		{
			if (a[j] == 0)
			{
				std::swap(a[j], a[j + 1]);
			}
		}
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
		}
	}
	SomeKindOfBubbleSort(a, size);
}
void InputType(char&);
#endif
