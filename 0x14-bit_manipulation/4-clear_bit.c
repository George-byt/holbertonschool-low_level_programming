#include "holberton.h"
/**
 * clear_bit - Function that sets the value of bit at index to 0.
 * @n: Pointer to the number.
 * @index: Index of the bit to change.
 * Return: 1 (Success), -1 (Failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int max, mask;
if (n == NULL)
return (-1);
max = ((sizeof(unsigned long int) * 8) - 1);
if (index > max)
return (-1);
mask = 1 << index;
(*n) = ~(mask)&(*n);
return (1);
}
