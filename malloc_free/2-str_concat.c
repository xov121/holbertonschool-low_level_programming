#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concat_str;
unsigned int len_s1 = 0, len_s2 = 0, i, j;
if (s1 != NULL)
{
while (s1[len_s1])
{
len_s1++;
}
}
if (s2 != NULL)
{
while (s2[len_s2])
{
len_s2++;
}
}
concat_str = malloc((len_s1 + len_s2 + 1) * sizeof(char));
if (concat_str == NULL)
{
return (NULL);
}
for (i = 0; i < len_s1; i++)
{
concat_str[i] = s1[i];
}
for (j = 0; j < len_s2; j++)
{
concat_str[i + j] = s2[j];
}
concat_str[len_s1 + len_s2] = '\0';
return (concat_str);
}
