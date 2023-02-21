#include "main.h"
/**
 * print_alphabet - Prints small lettter alphabets
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
