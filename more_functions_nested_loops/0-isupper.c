#include "main.h"

/**
 * _isupper - Checks for upper case character
 * @c: the character to be verified.
 * Return:  if upper, else return 0.
 **/
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
