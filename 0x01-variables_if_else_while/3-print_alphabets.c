#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints alphabet in small letter
 * Return: 0 (Success)
 *
 */
int main(void)
{
for (int i = 97; i <= 122; i++)
{
putchar("%c", i);
}
return (0);
}
