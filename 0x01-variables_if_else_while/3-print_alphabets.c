#include <stdio.h>
/**
 * main - A program that prints small letters and then capital letters
 * Return: 0 (Success)
 */
int main(void)
{
char c = 'a';
char d = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (d <= 'Z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
