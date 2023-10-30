#include "main.h"

/**
 *_strpbrk - Searches a string for any of a set of bytes
 *@s: The string to be scanned
 *@accept: The string containing the characters to match
 *Return: Pointer to the byte in s that matches one of the bytes
 *in accept, or NULL if no such byte is found
 **/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (NULL);
}
