#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Function that returns the length of a string.
 * @s: Pointer.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int len;
len = 0;
for (; *s != '\0'; s++)
len++;
return (len);
}
