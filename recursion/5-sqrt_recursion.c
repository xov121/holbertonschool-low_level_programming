#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (find_sqrt(n, 0));
}

/**
 * find_sqrt - helper function to find the natural square root
 * @num: the number to find the square root of
 * @root: the current number to test
 * Return: the square root, or -1 if not natural
 */
int find_sqrt(int num, int root)
{
if (root * root > num)
{
return (-1);
}
if (root * root == num)
{
return (root);
}
return (find_sqrt(num, root + 1));
}
