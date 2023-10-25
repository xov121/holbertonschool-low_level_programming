#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: The string to be printed.
 **/
void _puts(char *str)
{
int index = 0;
while (str[index] != '\0')
{
_putchar(str[index]);
index++;
}
_putchar('\n');
}
