#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * Return: 0 (Success)
 */
void print_numbers(void)
{
int i = '0';

while (i < '10')
{
_putchar(i);
i++;
}
_putchar('\n');
return (0);
}
