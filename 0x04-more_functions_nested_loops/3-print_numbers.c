#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * Return: 0 (Success)
 */
void print_numbers(void)
{
char i;

while (i >= 48 && i <= 57)
{
_putchar(i);
i++;
}
_putchar('\n');
return (0);
}
