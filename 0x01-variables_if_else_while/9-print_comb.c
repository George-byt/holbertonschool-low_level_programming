#include <stdio.h>

/**
 * main - Numbers
 *
 * Return: Always 0.
 *
 */

int main(void)

{

int number;

number = 48;

while (number <= 57)

{

putchar(number);

if (number < 57)

{
putchar(',');
putchar(' ');
}
number++;
}

putchar('\n');
return (0);
}
