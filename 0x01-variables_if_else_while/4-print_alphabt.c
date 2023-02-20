#include <stdio.h>
/**
 * main - A program that prints alphabet with exception of q and e
 * Return: 0 (Success)
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}
