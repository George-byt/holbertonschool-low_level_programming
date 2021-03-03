#include <stdio.h>

/**
 * main - Program that prints the number of arguments passed into it.
 *@argc: Argument count.
 *@argv: Argument vector.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
int len;
for (i = 1; i < argc; i++)
{
len++;
}
(void)argv;
printf("%d\n", len);
return (0);
}
