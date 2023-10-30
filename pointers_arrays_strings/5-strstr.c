#include "main.h"
/**
 *_strstr - Locates a substring
 *@haystack: The string to be scanned
 *@needle: The substring to be located
 *Return: Pointer to the beginning of the located substring
 *, or NULL if not found
 **/
char *_strstr(char *haystack, char *needle)
{
char *h, *n;
while (*haystack)
{
h = haystack;
n = needle;
while (*haystack && *n && *haystack == *n)
{
haystack++;
n++;
}
if (!*n)
{
return (h);
}
haystack = h + 1;
}
return (NULL);
}
