#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Function that returns the length of a string.
 * @s: Pointer.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int count;
 int size;
for (count = 0; s[count] != '\0'; count++)
size++;
return (size);
}
