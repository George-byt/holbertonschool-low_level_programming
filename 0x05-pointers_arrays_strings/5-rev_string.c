#include "holberton.h"

/**
 * rev_string - check the code for Holberton School students.
 * @s: String pointer.
 * Return: Always 0.
 */
void rev_string(char *s)
{
int len;
len = 0;
for (; *s != '\0'; s++)
{
_putchar(*s);
}
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
