#include "holberton.h"

/**
 * rev_string - check the code for Holberton School students.
 * @s: String pointer.
 * Return: Always 0.
 */
void rev_string(char *s)
{
for (; *s != '\0'; s++)
{
_putchar(*s);
}





_putchar('\n');
}
