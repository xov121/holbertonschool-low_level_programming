#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of nmemb
 * elements of size bytes each.
 * @nmemb: The number of elements.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory, or
 * NULL if nmemb or size is 0 or
 * if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *memory;
unsigned int i, total_size;
if (nmemb == 0 || size == 0)
return (NULL);
total_size = nmemb * size;
memory = malloc(total_size);
if (memory == NULL)
return (NULL);
for (i = 0; i < total_size; i++)
{
memory[i] = 0;
}
    return (memory);
}
