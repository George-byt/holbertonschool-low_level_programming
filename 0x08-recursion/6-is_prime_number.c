#include "holberton.h"
#include <stdio.h>

/**
 * is_prime_number - Function that return 1 if the input integer
 * is prime number otherwise return 0.
 * @n: integer.
 * Return: Always 0.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else if (prime_check(n, n / 2) > 0)
return (1);
return (0)
}

/**
 * prime_check - checks for prime
 * @n: int
 * @i: int
 * Return: prime check
 */
int prime_check(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0)
return (0);
else
return (prime_check(n, i - 1));
}
