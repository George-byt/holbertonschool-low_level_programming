#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest.
 * @dest: pointer to save the string
 * @src: string to save in desc
 * Return: the new value saved in dest
 */

char *_strcpy(char *dest, char *src)
{
int counter;
for (counter = 0; src[counter] != '\0'; counter++)
dest[counter] = src[counter];
dest[counter] = src[counter];
return (dest);
}
