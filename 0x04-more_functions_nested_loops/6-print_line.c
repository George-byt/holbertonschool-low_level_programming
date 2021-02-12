#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: the number of times the "_" character will be print.
 */
void print_line(int n)
{
int line;
if (n >= 0)
{
for (line = 0; line < n; line++)
{
_putchar('_');
}
}
_putchar('\n');
}
