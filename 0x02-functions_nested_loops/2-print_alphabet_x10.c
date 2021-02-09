#include "holberton.h"

/**
 * print_alphabet - Function that prints the alphabet.
 * Return: Always 0.
 */

void print_alphabet(void)

{
char lowercase;
int count;
for (count = 1; count <= 10; count++)
{
lowercase = 'a';
while (lowercase <= 'z')
{
_putchar(lowercase);
lowercase++;
}
_putchar('\n');
}
_putchar('\n');

}
