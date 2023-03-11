#include "main.h"
/**
 * _isalpha - program checks whether given number is alphabet
 * @c: value
 * Return: 1 (Success)
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
