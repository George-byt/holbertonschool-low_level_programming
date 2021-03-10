#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: pointer to array.
 * @size: size.
 * @action: pointer to the function.
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t c = 0;
if ((*action) == '\0' || array == '\0' || size <= 0)
return;
for ( ; c < size; c++)
(*action)(array[c]);
}
