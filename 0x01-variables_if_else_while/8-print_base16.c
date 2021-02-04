#include <stdio.h>

/**
 * main - Numbers of base 10.
 *
 * Return: Always 0.
 */

int main(void)

{
char number, alphabet;
number = '0';
alphabet = 'a';
while (number <= '9')
{
putchar(number);
number++;
}
while (alphabet <= 'f')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
