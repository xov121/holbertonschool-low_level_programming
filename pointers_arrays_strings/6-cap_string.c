#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be modified.
 * Return: A pointer to the modified string.
 **/
char *cap_string(char *s)
{
int i = 0;
int new_word = 1;
while (s[i] != '\0')
{
if (new_word && (s[i] >= 'a' && s[i] <= 'z'))
{
s[i] = s[i] - 'a' + 'A';
}
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
s[i] == ',' || s[i] == ';' ||
s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' ||
s[i] == ')' || s[i] == '{' || s[i] == '}')
{
new_word = 1;
}
else
{
new_word = 0;
}
i++;
}
return (s);
}
