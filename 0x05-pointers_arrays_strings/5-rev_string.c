#include "holberton.h"

/**
 * rev_string - check the code for Holberton School students.
 * @s: String pointer.
 * Return: Always 0.
 */
void rev_string(char *s)
{
int counter;
int size = 0;
char temp_c;
for (counter = 0; s[counter] != '\0'; counter++)
size++;
for (counter = 0; counter < size / 2; counter++)
{
temp_c = s[counter];
s[counter] = s[size - counter - 1];
s[size - counter - 1] = temp_c;
}
}
