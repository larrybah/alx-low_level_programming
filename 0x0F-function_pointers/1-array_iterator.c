#include "function_pointers.h"
/**
 * array_iterator - a function that iterates through an array
 * @array: array
 * @size: size of array
 * @action: callback furnciton action to perform
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
