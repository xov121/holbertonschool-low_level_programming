#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 * Return: Pointer to the duplicated string
 */
char *_strdup(char *str)
{
char *dup;
unsigned int len = 0, i;
while (str[len])
len++;
dup = malloc(len + 1);
if (dup == NULL)
return (NULL);
for (i = 0; i < len; i++)
dup[i] = str[i];
dup[len] = '\0';
return (dup);
}
/**
 * new_dog - Creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
dog = malloc(sizeof(dog_t));
if (!dog)
return (NULL);
dog->name = _strdup(name);
if (!dog->name)
{
free(dog);
return (NULL);
}
dog->owner = _strdup(owner);
if (!dog->owner)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->age = age;
return (dog);
}
