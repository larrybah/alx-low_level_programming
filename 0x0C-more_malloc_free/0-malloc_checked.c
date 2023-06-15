#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be passed
 * Return: not suppose to ruturn anything
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;
	int exit_status = 98;

	ptr = malloc(sizeof(char) * b);

	if (ptr == NULL)
	{
		exit(exit_status);
	}
}
