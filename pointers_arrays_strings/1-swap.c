#include "main.h"
/**
 * swap_int - swaps value of 2 integers
 * @a: first value
 * @b: second value
 * Return: void
 **/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
