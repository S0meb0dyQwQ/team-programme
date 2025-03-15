#include <iostream>
#include "SomethingThatNotTemplate.h"
#include "FunWithArrays.h"
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
	SomeKindOfBubbleSort( a, size);
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