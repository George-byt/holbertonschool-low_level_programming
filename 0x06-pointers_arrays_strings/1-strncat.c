#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - Function that concatenates two strings
 * @dest: first string.
 * @src: Second string.
 * @n: numbers of max bytes for get from src.
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int len, j;
len = 0;
while (dest[len] != '\0')
{
len++;
}
for (j = 0; j < n && src[j] != '\0'; j++)
dest[len + j] = src[j];
dest[len + j] = '\0';
return (dest);
}
