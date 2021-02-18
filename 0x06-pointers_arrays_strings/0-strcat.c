#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - Function that concatenates two strings. 
 * @dest: String.
 * @src: String.
 * Return: Pointer to resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int len, j;
/*store length of dest in the length variable.*/
len = 0; 
while (dest[len] != '\0') 
{
len++;
}
/*concatenate src to dest*/
for (j = 0; src[j] != '\0'; j++, len++)
{
dest[len] = src[j];
}
/*terminating the dest string.*/
dest[len] = '\0';
return (dest);
}
