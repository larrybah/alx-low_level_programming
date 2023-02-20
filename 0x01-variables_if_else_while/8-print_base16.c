#include <stdio.h>
/**
 * main - A program that prints number in hexadecimal
 * Return: 0 (Success)
 */
int main(void)
{
int i = '0';
while (i <= '9')
{
putchar(i);
i++;
}
i = 'a';
while (i <= 'f')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
