#include "main.h"
/**
 * print_array - prints n elements of an array
 * @a: name of array
 * @n: elements of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}