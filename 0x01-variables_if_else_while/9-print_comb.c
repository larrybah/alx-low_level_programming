#include <stdio.h>
/**
 * main - A program that prints a combination of digits
 * Return: 0 (Succes)
 */
int main(void)
{
int i = '0';
while (i <= '9')
{
putchar(i);
if (i != '9')
{
putchar(',');
putchar(' ');
}
++i;
}
putchar('\n');
return (0);
}
