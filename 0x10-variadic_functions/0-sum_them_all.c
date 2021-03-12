#include "variadic_functions.h"
/**
 * sum_them_all - Function that returns the sum of all its parameters.
 * @n: number of arguments.
 * Return: Return the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int counter, suma = 0;
va_list num_arg;
if (n == 0)
return (0);
va_start(num_arg, n);
for (counter = 0; counter < n; counter++)
suma = suma + va_arg(num_arg, int);
va_end(num_arg);
return (suma);
}
