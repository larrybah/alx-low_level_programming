#include "main.h"
/**
 * reverse_array - prints array in reverse order
 * @a: name of array
 * @n: array elements
 */
void reverse_array(int *a, int n)
{
	int *ptr = &a[n - 1];
	while (n < *ptr)
	{
		n++;
		ptr--;

	}
	printf("\n");
}
