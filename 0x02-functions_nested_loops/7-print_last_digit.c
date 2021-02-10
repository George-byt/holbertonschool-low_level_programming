#include "holberton.h"

/**
 * print_last_digit - Function that prints the last digit of a number.
 *
 * @number: number.
 *
 * Return: Always 0.
 */
int print_last_digit(int number)

{
int lastdigit;
lastdigit = number % 10;
if (lastdigit < 0)
{
lastdigit = lastdigit * -1;
}
_putchar(lastdigit + '0');
return (lastdigit);
}
