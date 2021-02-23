#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: Pointer.
 * @size: Integer.
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
int i;
int j;
int sum = 0;
int sum2 = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
sum = sum + a[j];
}
if (j == size - i - 1)
{
sum2 = sum2 + a[j];
}
}
a += size;
}
printf("%d, %d\n", sum, sum2);
}
