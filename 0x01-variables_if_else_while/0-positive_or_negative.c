#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A Program that checks if a number is positive or negative or zero
 * Return: 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is Positive\n", n);
}
else if (n > 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%n is zero\n", n);
}
return (0);
}
