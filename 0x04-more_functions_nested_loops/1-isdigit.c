#include "main.h"
/**
 * _isdigit - prints digit from 1 throught 9
 * @c: parameter
 * Return: 1 (Success)
 */
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
