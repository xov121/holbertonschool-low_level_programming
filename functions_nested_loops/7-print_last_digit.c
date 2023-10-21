#include "main.h"

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
