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
int index;
for (index = 0; s[index] >= '\0'; index++)
if (s[index] == c)
return (s + index);
return (0);
}
