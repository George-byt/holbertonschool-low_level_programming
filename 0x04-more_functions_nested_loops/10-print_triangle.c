#include "holberton.h"

/**
 * print_triangle - Program that print a triangle.
 * @size: size of the triangle.
 * Return: Always 0.
 */
void print_triangle(int size)
{
int fila, columna, spaces;
spaces = size;
if (size > 0)
{
for (fila = 1; fila <= size; fila++)
{
for (columna = 1; columna <= size; columna++)
{
if (columna < spaces)
_putchar(' ');
else
_putchar('#');
}
spaces = (spaces - 1);
_putchar('\n');
}
}
else
_putchar('\n');
}
