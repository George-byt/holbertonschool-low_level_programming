#include "holberton.h"

/**
 * main - Function that prints the alphabet.
 *
 *
 * Return: Always 0.
 */

void print_alphabet(void)

{

char lowercase;

lowercase = 'a';
while (lowercase <= 'z')

{

_putchar(lowercase);
lowercase++;

}

_putchar('\n');

}