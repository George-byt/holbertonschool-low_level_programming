#include <stdio.h>

/**
 * main - Alphabet
 *
 * Return: Always 0.
 */
int main(void)

{

char alphabet;
alphabet = 'a';

while (alphabet <= 'z')
{

if (alphabet != 'q' && alphabet != 'e')

putchar(alphabet);
alphabet++;
}

putchar('\n');
return (0);
}
