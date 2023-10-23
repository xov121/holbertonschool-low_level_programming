#include "main.h"

/**
* print_triangle - Prints a triangle using the character '#'
* @size: The size of the triangle
* Return: void
**/
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}
int i, j ,k;
for (i = 1; i <= size; ++i)
{
for (j = 1; j <= size - i; ++j)
{
_putchar(' ');
}
for (k = 1; k <= i; ++k)
{
_putchar('#');
}
_putchar('\n');
}
}
