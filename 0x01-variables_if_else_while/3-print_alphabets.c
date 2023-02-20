#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints alphabet in small letter
 * Return: 0 (Success)
 *
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
