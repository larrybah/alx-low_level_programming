#include <stdio.h>
/**
 * main - print sizes of data types
 * Return: 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu\n", sizeof(char));
	printf("Size of an int: %zu\n", sizeof(int));
	printf("Size of a long int: %zu\n", sizeof(long int));
	printf("Size of a lon long int: %zu\n", sizeof(long long int));
	printf("Size of a float: %zu\n", sizeof(float));

	return (0);
}
