#include "main.h"
/**
 * _islower - A program that checks if character is lower
 * @c: check if 'c' is lower
 * Return: 0 (Success)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
