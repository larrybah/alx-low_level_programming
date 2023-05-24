#include "main.h"

/**
 * print_last_digit - prints the last digit of a value
 * @i: value to be return
 * Return: value on Success
 */
int print_last_digit(int i)
{
	int last_digit = 0;

	last_digit = i % 10;
	return (last_digit);
}
