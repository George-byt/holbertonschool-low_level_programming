#include "holberton.h"
#include <stdio.h>

/**
 * factorial - Function that returns the factorial of a given number.
 * @n: integer.
 * Return: Always 0.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial (n - 1));
}
