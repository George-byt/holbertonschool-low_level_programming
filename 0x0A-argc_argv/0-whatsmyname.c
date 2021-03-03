#include <stdio.h>

/**
 * main - Program that prints the number of arguments passed into it.
 * @argc:
 * @argv:
 */

int main(int argc, char *argv[])
{
printf("%s", argv[argc - 1]);
return (0);
}
