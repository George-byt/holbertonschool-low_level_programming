#include "holberton.h"

/**
* main - Program that prints Holberton.
*
* Return: Always 0.
*/

int main(void)

{

char str[] = "Holberton";
int i;

i = 0;

while (str[i])

{

_putchar(str[i]);
i++;

}

_putchar('\n');

return (0);

}
