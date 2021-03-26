#include "holberton.h"
/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 * @b: b is pointing to a string of 0 and 1 chars.
 * Return: The converted number, or 0 if:
 * there is one or more chars in the string b that is not 0 or 1 b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{

unsigned int val = 0;
int i = 0;

if (b == NULL)
return (0);

while (b[i] == '0' || b[i] == '1')
{
val <<= 1;
val += b[i]-'0';
i++;   /* code */
}
return val;
}
