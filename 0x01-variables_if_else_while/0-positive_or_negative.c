#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A Program that checks if n is posititive print n is positive
 * if n is negative print n is negative
 * else print n is zero
 * Return: 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
