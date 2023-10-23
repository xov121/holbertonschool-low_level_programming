#include "main.h"

/**
*more_numbers - prints numbers 0 to 14 followed
*new line 10 times
*Return: nothing, void
**/

void more_numbers(void)
{
int a, b;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 14; b++)
{
if (b >= 10)
{
_putchar(b / 10 + '0');
}
_putchar(b % 10 + '0');
}
}
_putchar('\n');
}
