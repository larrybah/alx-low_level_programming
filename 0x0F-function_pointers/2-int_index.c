#include "function_pointers.h"
/**
 * int_index - searches and prints integers in array
 * @array: array to search
 * @size: size of array
 * @cmp: represent comparison function(callback)
 * Return: 0 Always
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)) != 0)
		{
			return (i);
		}
	}
	
	return (-1);
}
