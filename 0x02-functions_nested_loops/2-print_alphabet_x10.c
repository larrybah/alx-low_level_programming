#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
char c;
int countCheck;
for (countCheck = 1; countCheck <= 10; countCheck++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
