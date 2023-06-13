#include "main.h"
/**
 * create_array - creates an array of characters
 * @c: elements of array
 * @size: size of array
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *) malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	else
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}

	return (array);
}
