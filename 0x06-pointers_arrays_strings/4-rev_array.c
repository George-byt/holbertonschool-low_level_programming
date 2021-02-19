#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int c, temp;
c = 0;
while (c < n / 2)
{
temp = a[c];
a[c] = a[n - c - 1];
a[n - c - 1] = temp;
c++;
}
}
