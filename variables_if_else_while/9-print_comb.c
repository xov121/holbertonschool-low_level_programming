#include <stdio.h>

/**
 *main - entry point
 *
 *Return: Always (0)
 **/

int main(void)
{
int n;

for (n = 48; n <= 57; n++)
{
putchar(n);
putchar(',');
putchar(' ');
}

return (0);
}
