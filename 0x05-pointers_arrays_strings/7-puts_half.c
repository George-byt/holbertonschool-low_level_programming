#include "holberton.h"

/**
 * puts_half - Function that prints half of a string.
 * @str: String pointer.
 * Return: Always 0.
 */
void puts_half(char *str)
{
int counter;
int size = 0;
for (counter = 0; str[counter] != '\0'; counter++)
size++;
for (counter = 5; counter < size; counter += 1)
_putchar(*(str + counter));
_putchar('\n');
}
