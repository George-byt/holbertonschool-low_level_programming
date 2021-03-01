#include "holberton.h"

/**
 * _abs - Function that computes the absolute value.
 * @number: integer number.
 * Return: Always 0.
 */

int _abs(int number)

{
if (number < 0)
return (number * -1);
else
return (number);
}
