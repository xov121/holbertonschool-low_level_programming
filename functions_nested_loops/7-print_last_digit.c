#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the number to compute the absolute value for
 * Return: the absolute value of n
 **/
int _abs(int n)
{
if (n < 0)
return (-n);
else
return (n);
}
/**
 * print_last_digit - prints last digit
 * @n: the number whose last digit is to be printed and returned
 * Return: returns last digit
 **/
int print_last_digit(int n)
{
int lastD = _abs(n % 10);
_putchar('0' + lastD);
return (lastD);
}
