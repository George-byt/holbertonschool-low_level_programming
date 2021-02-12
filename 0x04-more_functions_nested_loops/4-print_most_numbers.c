#include "holberton.h"

/**
 * print_most_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{

char numbers;
for (numbers = '0'; numbers <= '9'; numbers++)
if (numbers != '2' && numbers != '8')
_putchar(numbers);
_putchar(10);
}
