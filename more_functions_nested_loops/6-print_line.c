#include "main.h"

/**
* print_line - prints _ n number of times
* @n: how many times to print _
* Return: void
**/
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (n <= 0)
{
_putchar('\n');
}
_putchar('_');
}
}
