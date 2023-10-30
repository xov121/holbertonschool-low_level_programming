#include "main.h"

/**
 *_memset - Fills memory with a constant byte
 *@s: Pointer to the memory area
 *@b: Constant byte
 *@n: Number of bytes to fill
 *Return: Pointer to the memory area s
 **/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *ptr = s;
for (i = 0; i < n; i++)
{
*ptr = b;
ptr++;
}
return (s);
}
