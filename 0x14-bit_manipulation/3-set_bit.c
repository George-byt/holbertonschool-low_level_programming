#include "holberton.h"
/**
 * set_bit - Function that sets the value of a bit 1 at a given index.
 * @n: Pointer to the number.
 * @index: Index.
 * Return: 1 if success, -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int num;
if (index > sizeof(unsigned long) * 8)
return (-1);
num = 1 << index;
*n = *n | num;
return (1);
}
