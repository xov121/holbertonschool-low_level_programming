#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: name of the person
 * @f: function pointer to a function that prints a name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
