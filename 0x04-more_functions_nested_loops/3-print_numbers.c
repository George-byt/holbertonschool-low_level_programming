#include "holberton.h"

/**
 * print_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_numbers(void)

{

char numbers;
numbers = '0';
while (numbers <= '9')
{
_putchar(numbers);
numbers++;
}

_putchar(10);

}
