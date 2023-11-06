#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program
 * @argc: The count of arguments
 * @argv: An array of pointers to the arguments (Not used in this program)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
