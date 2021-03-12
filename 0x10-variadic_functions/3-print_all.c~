#include "variadic_functions.h"
/**
 * print_all - Function that prints anythig.
 * @format: The list of types of arguments.
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{

va_list arg;
int i = 0;
char form;
char *str;

va_start(arg, format);
while (format != NULL && format[i])
{
form = format[i];
switch (form)
{
case 'c':
printf("%c", va_arg(arg, int));
break;
case 'i':
printf("%d", va_arg(arg, int));
break;
case 'f':
printf("%f", va_arg(arg, double));
break;
case 's':
str = va_arg(arg, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
}
if ((form == 'c' || form == 'i' || form == 'f' || form == 's')
&& format[i + 1])
printf(", ");
i++;
}
printf("/n");
va_end(arg);
}
