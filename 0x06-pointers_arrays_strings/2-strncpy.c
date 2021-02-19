#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - Function that copies a string.
 * @dest: First string.
 * @src: Second string.
 * @n: number of max bytes for get from src.
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && dest[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
