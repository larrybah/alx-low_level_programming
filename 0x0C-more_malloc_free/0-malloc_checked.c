#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be passed
 * Return: not suppose to ruturn anything
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
		return (ptr);
}
