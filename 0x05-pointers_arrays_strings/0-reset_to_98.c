#include "holberton.h"
#include <stdio.h>

/**
 * reset_to_98 - Function that takes
 * a pointer to an int as parameter
 * and updates the value it points to to 98.
 * @n: Pointer.
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
int b;
b = 98;
*n = b;
}
