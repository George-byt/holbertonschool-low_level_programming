#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - Function that prints numbers.
 * @str: String pointer.
 * Return: Always 0.
 */
void puts2(char *str)
{
for (; *str != '\0'; str++)
if (*str % 2 == 0)
{
_putchar(*str);
}
_putchar('\n');
}
