#include "main.h"
/**
 * printf_alphabet_X10 - prints the alphabet ten times
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
char c = 'a';
while (c <= 'z')
{
for (int i = 1; i<= 10; i++)
{
_putchar(c);
}
_putchar('\n');
}
}
