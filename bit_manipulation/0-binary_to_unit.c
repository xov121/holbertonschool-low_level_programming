#include "main.h"
#include <stdio.h>

/**
 * binary_to_unit - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number or 0 if:
 * - there is one or more chars in the string b that is not 0 or 1.
 * - b is NULL.
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
	return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		num *= 2;
		if (b[i] == '1')
		num += 1;
		else if (b[i] != '0')
		return (0);
	}
	return (num);
}
