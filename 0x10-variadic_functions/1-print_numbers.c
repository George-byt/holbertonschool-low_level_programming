#include "variadic_functions.h"
/**
 * print_numbers - Functions that prints numbers.
 * @separator: print all the numbers with a separator.
 * @n: string to separate the numbers.
 * Return: Void function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

unsigned int counter;
va_list args;

va_start(args, n);

for (counter = 0; counter < n; counter++)

{
printf("%d", va_arg(args, int));
if (counter != n - 1 && separator != NULL)
printf("%s", separator);
}

printf("\n");
va_end(args);

}
