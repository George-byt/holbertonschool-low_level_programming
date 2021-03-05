#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: Integer
 * Return: Return a pointer.
 */
void *malloc_checked(unsigned int b)
{
int *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
