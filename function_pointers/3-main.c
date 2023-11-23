#include "3-calc.h"

/**
 * main - Entry point.
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
int num1, num2;
int (*func)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
func = get_op_func(argv[2]);
if (!func)
{
printf("Error\n");
exit(99);
}
printf("%d\n", func(num1, num2));
return (0);
}
