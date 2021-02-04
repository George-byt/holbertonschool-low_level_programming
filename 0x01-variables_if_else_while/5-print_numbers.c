#include <stdio.h>

/**
 * main - Numbers of base 10.
 *
 * Return: Always 0.
 */

int main(void)

{
char number;
number = '0';
while (number <= '9')
{
putchar(number);
number++;
}
putchar('\n');
return (0);
}
