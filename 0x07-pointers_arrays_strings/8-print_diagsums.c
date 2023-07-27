#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int mainDiagonalSum = 0;
	int antiDiagonalSum = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				mainDiagonalSum += *(a + i * size + j);
			}
			if (i + j == size - 1)
			{
				antiDiagonalSum += *(a + i * size + j);
			}
		}
	}
	printf("%d, ", mainDiagonalSum);
	printf("%d", antiDiagonalSum);
	printf("\n");
}
