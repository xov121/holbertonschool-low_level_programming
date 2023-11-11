#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: the string to be duplicated
 *
 * Returns NULL if str is NULL or if insufficient memory was available.
 *
 * Return: a pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
char *dup;
unsigned int len = 0;
unsigned int i;
if (str == NULL)
{
return (NULL);
}
while (str[len] != '\0')
{
len++;
}
dup = malloc((len + 1) * sizeof(char));
if (dup == NULL)
{
return (NULL);
}
for (i = 0; i <= len; i++)
{
dup[i] = len[i];
return (dup);
}
