B#include "holberton.h"
#include <stdio.h>
/**
 * _puts - Function that prints a string.
 * @str: String.
 * Return: Always 0.
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
