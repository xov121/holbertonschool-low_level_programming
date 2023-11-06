#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 * @argc: The count of arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if all arguments are numbers, 1 if any argument is not a number
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i, j;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
