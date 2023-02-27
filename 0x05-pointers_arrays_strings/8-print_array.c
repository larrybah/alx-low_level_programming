#include "main.h"
/**
 * print_array - prints n elements of an array
 * @a: parameter
 * @n: number of elements
 * Return: void
 */
void print_array(int *a, int n)
{
	for (int i = 0; i < n - 1; i++)
		printf("%d, ", *(a + i));
	if (i == n - 1)
		printf("%d", *(a + i));
	printf("\n");

}
