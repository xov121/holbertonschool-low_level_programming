#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to be modified.
 * Return: A pointer to the modified string.
 **/
char *leet(char *s)
{
int i = 0;
char letters[] = "aeotlAEOTL";
char numbers[] = "4307143071";
while (s[i] != '\0')
{
int j;
for (j = 0; j < 10; j++)
{
if (s[i] == letters[j])
{
s[i] = numbers[j];
break;
}
}
i++;
}
return (s);
}
