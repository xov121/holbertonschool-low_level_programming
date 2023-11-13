#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: A pointer to the newly created string or NULL if the
 * function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new_str;
unsigned int len_s1 = 0, len_s2 = 0, i, j;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len_s1])
{
len_s1++;
}
while (s2[len_s2])
{
len_s2++;
}
if (n > len_s2)
{
n = len_s2;
}
new_str = malloc(len_s1 + n + 1);
if (new_str == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
new_str[i] = s1[i];
}
for (j = 0; j < n && s2[j] != '\0'; j++)
{
new_str[i + j] = s2[j];
}
new_str[i + j] = '\0';
return (new_str);
}
