#include "holberton.h"
#include <stdio.h>
#include <math.h>
int reverse(int s);
/**
 * is_palindrome - Function that returns 1 if a 
 * string is a palindrome and 0 if not.
 * @s: String pointer.
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
  /* 
   * Check if the given number is equal to 
   * its reverse.
   */
if (s == reverse(s))
{
return (1);
}
return (0);
}

/**
 * Recursive - function to find reverse of any number.
 * @num: Integer.
 *
 */
int reverse(int s)
{
  /* Find number of digits in num */
int digit = (int)log10(s);
  /* Recursion base condition */
if (s == 0)
  return (0);
return ((s%10 * pow(10, digit)) + reverse(s/10));
}
