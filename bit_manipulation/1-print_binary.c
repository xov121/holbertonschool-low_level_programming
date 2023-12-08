#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);
	int leading_zero = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask)
	{
		if (n & mask && leading_zero)
		leading_zero = 0;

		if (!leading_zero)
		_putchar((n & mask) ? '1' : '0');

		mask >> 1;
	}
}
