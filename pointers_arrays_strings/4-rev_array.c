#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string for comparison.
 * @s2: Second string for comparison.
 * Return: Difference between the ASCII values of the first pair of characters
 *         where s1 and s2 differ; 0 if they are equal.
 **/
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (s1[i] - s2[i]);
}
