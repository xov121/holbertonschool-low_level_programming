#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers provided as arguments
 * @argc: The count of arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if the program receives two arguments, 1 otherwise
 */
int main(int argc, char *argv[])
{
int num1, num2, product;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
product = (num1 *num2);
printf("%d\n", product);
return (0);
}
