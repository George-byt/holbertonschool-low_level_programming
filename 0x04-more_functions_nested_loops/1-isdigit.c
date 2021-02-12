#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - Checks for a digit.
 * @c: number.
 * Return: Always 0.
 */

int _isdigit(int c)

{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
