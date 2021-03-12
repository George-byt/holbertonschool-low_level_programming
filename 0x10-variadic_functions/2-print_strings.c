#include "variadic_functions.h"
/**
 * print_strings - Function that prints strings.
 * @separator: The string to be printed.
 * @n: Number of strings passed to the function.
 * Return: 
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int counter;
char *s;
va_list args;
va_start(args, n);
for (counter = 0; counter < n; counter++)
{
s = va_arg(args, char *);
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
if (counter < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
