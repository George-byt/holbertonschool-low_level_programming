#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - Function that gets the length if a prefix substring.
 * @s: Pointer.
 * @accept: Pointer.
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
int len = 0;
int i, j;
for (i = 0; s[i] != '\0'; i++)
for (j = 0; accept[j] != '\0'; j++)

if (s[i] == accept[j])
{
len++;
break;
}
else if (accept[j + 1] == '\0')
return (len);
return (len);
}
