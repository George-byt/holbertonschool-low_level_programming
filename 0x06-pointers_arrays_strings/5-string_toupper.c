#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - Function that changes all lowercase
 * letters of a string to uppercase.
 * @s: String pointer.
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
/*Run a loop from 0 till end of string*/
int i;
for (i = 0; s[i] != '\0'; i++)
/*Inside loop check if current string is lowercase.*/
{
if (s[i] >= 'a' && s[i] <= 'z')

/*
 * Convert it to uppercase. Now, why subtracting it with 32.
 * Because diferrence of a - A = 32
 */
{
s[i] = s[i] - 32;
}
}
return (s);
}
