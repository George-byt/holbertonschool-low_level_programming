#include "holberton.h"

/**
 * jack_bauer - Function that prints every minute of the day.
 *
 * @:
 *
 * Return: Always 0.
 */

void jack_bauer(void)

{
int num_A, num_B, num_C, num_D;
for (num_A = '0'; num_A <= '2'; num_A++)
for (num_B = '0'; num_B <= '9'; num_B++)
for (num_C = '0'; num_C <= '5'; num_C++)
for (num_D = '0'; num_D <= '9'; num_D++)
{
if (!(num_A == '2' && num_B >= '4'))
{
_putchar(num_A);
_putchar(num_B);
_putchar(':');
_putchar(num_C);
_putchar(num_D);
_putchar('\n');
}
}
}
