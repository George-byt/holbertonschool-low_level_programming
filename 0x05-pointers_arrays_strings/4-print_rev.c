#include "holberton.h"

/**
 * print_rev - Function that prints a string, in reverse.
 * @s: String pointer.
 * Return: Always 0.
 */
void print_rev(char *s)
{
int len;
len = 0;
for (; *s != '\0'; s++)
len++;
s--;
for (; len > 0; s--)
{
_putchar(*s);
len--;
}
_putchar('\n');
}
