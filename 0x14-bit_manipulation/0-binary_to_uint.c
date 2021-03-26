#include "holberton.h"
/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 * @b: b is pointing to a string of 0 and 1 chars.
 * Return: The converted number, or 0 if:
 * there is one or more chars in the string b that is not 0 or 1 b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{

unsigned int num, i, flip;
num = 0;
flip = 1;

if (b == NULL || b[0] == '\0')
return (0);

for (i = 0; b[i] != '\0'; i++)
{
    if (b[i] != '0' && b[i] != '1')
    return (0);
    
num <<= 1;
if (b[i] == '1')
{
    num = num ^ flip;
}

}
return (num);
}
