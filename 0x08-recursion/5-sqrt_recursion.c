#include "holberton.h"
#include <stdio.h>
int square_root(int n, int m);
/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: Integer.
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
  return (square_root(n, 1));
}

/**
 * square_root
 * @n: Integer.
 * @m: Integer.
 * Return: Return a number.
 */
int square_root(int n, int m)
{
  if (m * m == n)
    {
      return (m);
    }
  else if (m * m > n)
    {
      return (-1);
    }
  else
    return (square_root(n, m + 1));
}
