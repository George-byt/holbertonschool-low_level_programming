#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that assing a random number.
 *
 * Return: Always 0.
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n");
}
if (n == 0)
{
printf("%d is zero\n");
}
if (n < 0)
{
printf("%d is negative\n");
} /* your code goes there */
return (0);
}
