#include <stdio.h>
/**
 * main - A program that prints Sizes of Data types using printf function
 * Return: 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long int  longIntType;
long long int longLongIntType;
float floatType;
printf("Size of a char: %zu byte\n", sizeof(charType));
printf("Size of an int: %zu byte\n", sizeof(intType));
printf("Size of a long int: %zu byte\n", sizeof(longIntType));
printf("Size of a long long int: %zu byte\n", sizeof(longLongIntType));
printf("Size of a float: %zu byte\n", sizeof(floatType));
return (0);
}
