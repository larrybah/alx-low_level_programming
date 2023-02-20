#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints the last number
 * Return: 0 (Success)
 */
int main(void)
{
int n;
char last[] = "Last digit of ";
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%s %d is %d and is ", last, n, n%20);
if (n % 20 > 5)
{
printf("greater than 5\n");
}
else if (n % 20 == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and 0\n")
}
return (0);
}
