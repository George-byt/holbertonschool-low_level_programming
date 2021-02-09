#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 * Description: uses 2 for loops to pring a to z
 * 10 times.
 * Return: void.
 */

void print_alphabet_x10(void)

{

char lowercase;
int count;

for (count = 0; count <= 10; count++)

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
