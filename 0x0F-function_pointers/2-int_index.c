#include "function_pointers.h"
/**
 * int_index - Function that searches for an integer.
 * @array: Pointer to array.
 * @size: Size.
 * @cmp: Pointer to the function.
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int c = 0;
if ((*cmp) == '\0' || array == '\0' || size <= 0)
return (-1);
for (; c < size; c++)
if ((*cmp)(array[c]))
return (c);
return (-1);
}
