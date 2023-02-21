#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
char c;
int countCheck;
for (c = 'a'; c <= 'z'; c++)
{
for (countCheck = 0; countCheck <= 10; countCheck++)
{
_putchar(c);
}
_putchar('\n');
}
}
