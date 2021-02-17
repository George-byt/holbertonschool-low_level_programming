#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers.
 * @a: the array of integers to be printed.
 * @n: the ammount of integers to be printed.
 */
void print_array(int *a, int n)
{
int counter;
for (counter = 0; counter < n; counter++)
{
printf("%i", a[counter]);
if (counter != n -1)
printf(", ");
}
printf("\n");
}
