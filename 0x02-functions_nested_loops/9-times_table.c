#include "holberton.h"

/**
 * times_table - prints the 9 times table.
 *
 *
 * Return: Always 0.
 */

void times_table(void)

{
int horizontal;
int vertical;
int value;
for (vertical = 0; vertical <= 9; vertical++)
for (horizontal = 1; horizontal <= 9; horizontal++)
{
if (horizontal == 1)
_putchar('0');
value = (horizontal * vertical);
if (product < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + value);
}
else if (value >= 10)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (value / 10));
_putchar('0' + (value % 10));
}
if (horizontal == 9)
_putchar('\n');
}
}
