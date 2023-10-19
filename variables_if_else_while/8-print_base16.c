#include <stdio.h>

/**
 *main - entry
 *
 *Return: Always 0 (Success)
 **/

int main(void)
{
int n;
char c;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
