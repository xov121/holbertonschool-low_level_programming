#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: integer
 **/
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;
if (s[0] == '-')
{
sign = -1;
i++;
}
else
if (s[0] == '+')
{
i++;
}
while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
int currD = s[i] - '0';
result = result * 10 + currD;
}
else
{
break;
}
i++;
}
return (result * sign);
}
