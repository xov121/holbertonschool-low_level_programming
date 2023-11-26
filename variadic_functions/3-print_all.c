#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, j = 0;
char *str, *sep = "";
va_start(args, format);
while (format && format[i])
{
j = 0;
while ("cifs"[j])
{
if (format[i] == "cifs"[j])
{
printf("%s", sep);
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s", str);
break;
}
sep = ", ";
break;
}
j++;
}
i++;
}
va_end(args);
printf("\n");
}
