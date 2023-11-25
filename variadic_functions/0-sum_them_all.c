#include <stdarg.h>

/**
 * sum_them_all - Sums all of its parameters.
 * @n: The number of parameters (excluding n).
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, arg, sum = 0;
va_list args;
va_start(args, n);
if (n == 0)
{
va_end(args);
return (0);
}
else
{
for (i = 0; i < n; i++)
{
arg = va_arg(args, int);
sum += arg;
}
}
va_end(args);
return (sum);
}
