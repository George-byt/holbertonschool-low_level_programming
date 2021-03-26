#include "holberton.h"
/**
 * get_bit - Function that returns the value of a bit at a given index.
 * @n: Integer to evaluate.
 * @index: Index of bit to find, index starts at 0.
 * Return: Value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{

unsigned long int copy;

	if (index > 31)
		return (-1);

	copy = n >> index;
	if (copy & 1)
		return (1);
	else
		return (0);


}
