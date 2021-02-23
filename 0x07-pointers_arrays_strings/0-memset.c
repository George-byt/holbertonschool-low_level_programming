#include "holberton.h"
/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer.
 * @b: Char.
 * @n: The size of the memory to print.
 * Return: Pointer with value updated.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
