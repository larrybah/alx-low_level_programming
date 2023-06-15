#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be passed
 * Return: not suppose to ruturn anything
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
	{
		exit(EXIT_FAILURE);
	}
	else
		return (ptr);
}
