#include "holberton.h"
/**
 * flip_bits - Function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: First number.
 * @m: Second number.
 * Return: number of bits you would need to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int counter;
	unsigned long int diff, copy_diff;
	int bitpl;

	counter = 0;
	bitpl = (sizeof(unsigned long int) * 8) - 1;
	diff = (n ^ m);
	for (; bitpl >= 0; bitpl--)
	{
		copy_diff = diff >> bitpl;
		if (copy_diff & 1)
			counter++;
	}
	return (counter);


}
