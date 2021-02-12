#include "holberton.h"

/**
 * more_numbers - Function that prints 10 times the numbers.
 *
 * Return: Always 0.
 */

void more_numbers(void)

{

int a;
int b;
int c;

for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '1'; b++)
for (c = '0'; c <= '9'; c++)
{
if (!(b == '0'))
if (!(b == '1' && c > '4'))
_putchar(b);
if (!(b == '1' && c > '4'))
_putchar(c);
}
_putchar('\n');
}
}
