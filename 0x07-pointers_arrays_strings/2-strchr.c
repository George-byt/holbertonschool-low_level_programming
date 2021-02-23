#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - Function that locates a character in a string.
 * @s: Pointer.
 * @c: Pointer.
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
char *p = s;
int index = 0;
while (*s != c)
{
++s;
++index;
}
if (*s == c)
{
return (p + index);
}
else
{
return (0);
}
}
