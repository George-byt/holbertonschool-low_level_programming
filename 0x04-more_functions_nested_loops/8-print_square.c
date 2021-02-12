#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 * @size: size of square.
 * Return: Always 0.
 */
void print_square(int size)
{
int largo;
int ancho;
if (size > 0)
{
for (ancho = 0; ancho < size; ancho++)
{
for (largo = 0;  largo < size; largo++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
