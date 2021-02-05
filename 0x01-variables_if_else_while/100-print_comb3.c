#include <stdio.h>

/**
 * main - Print numbers from 01 to 99.
 *
 * Return: Always 0.
 *
 */

int main(void)

{
int number_a, number_b;
for (number_a = 48; number_a <= 56; number_a++)
for (number_b = 57; number_b >= 49; number_b++)
{
putchar(number_a);
putchar(number_b);
if (number_a == 56 && number_b == 57)
{
putchar('\n');
break;
}
putchar(',');
putchar(' ');
}
return (0);
}
