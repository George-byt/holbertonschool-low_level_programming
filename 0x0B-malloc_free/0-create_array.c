#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Function that creates an array of chars, 
 * and initializes it with a specific char.
 * @size: unsigned int
 * @c: char
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

array = malloc(sizeof(c) * size);

if (size == 0 || array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
