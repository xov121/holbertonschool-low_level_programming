#include "main.h"

/**
 *main - entry point
 *Return: Always 0 (Success)
 **/
int main(void)
{
print_alphabet();
return (0);
}
/**
 * print_alphabet - Prints alphabet in lowercase.
 * Description: This function uses a loop to go through each letter
 * of the alphabet from 'a' to 'z', and prints each letter to the
 * standard output using the _putchar function.
 * Return: This function does not return anything as its return type is void.
 **/
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
