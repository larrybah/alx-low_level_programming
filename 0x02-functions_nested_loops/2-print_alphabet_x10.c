#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c * 10);
}
_putchar('\n');
}
