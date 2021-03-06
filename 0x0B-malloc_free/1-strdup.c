#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer
 * to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: char
 * Return: Always 0.
 */
char *_strdup(char *str)
{
char *dup;
int len = 0;
int i;
if (!str)
return (NULL);
while (str[len] != '\0')
{
len++;
}
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);
for (i = 0; i <= len; i++)
dup[i] = str[i];
return (dup);
}
