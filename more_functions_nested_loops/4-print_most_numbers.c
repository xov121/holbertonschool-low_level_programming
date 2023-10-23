#include "main.h"

/**
* print_most_numbers - uses loop to print most numbers
* except 2 and 4
* Return: void
**/
void print_most_numbers(void)
{
int a;
for (a = '0'; a <= '9'; a++)
{
if ((a != '2') || (a != '4'))
{
_putchar(a);
}
else
{
_putchar('\n');
}
}
}
