#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - Function that prints numbers.
 * @str: String pointer.
 * Return: Always 0.
 */
void puts2(char *str)
{
int counter;
int size = 0;
for (counter = 0; str[counter] != '\0'; counter++)
size++;
for (counter = 0; counter < size; counter += 2)
_putchar(*(str + counter));
_putchar('\n');
}
