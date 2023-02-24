#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * Return: 0 (Success)
 */
void print_numbers(void)
{
int x = '0';
while (x <= '10')
{
_putchar(x);
x++;
}
_putchar('\n');
return (0);
}
