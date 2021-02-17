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
if (size % 2)
counter = (size + 1) / 2;
else
counter = size / 2;
while (str[counter])
_putchar(*(str + counter++));
_putchar('\n');
}
