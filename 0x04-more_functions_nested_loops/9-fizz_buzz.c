#include "stdio.h"

/**
 * main - Fizz Buzz
 *
 * Return: Always 0.
 */
int main(void)
{
int number;
for (number = 1; number <= 100; number++)
{
if (number % 3 == 0)
printf("Fizz");
if (number % 5 == 0)
printf("Buzz");
if (!(number % 3 == 0 || number % 5 == 0))
printf("%d", number);
if (number != 100)
printf(" ");
}
printf("\n");
return (0);
}
