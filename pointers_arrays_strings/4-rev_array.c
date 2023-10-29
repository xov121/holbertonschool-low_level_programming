#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array to be reversed.
 * @n: The number of elements in the array.
 * Return: void
 **/
void reverse_array(int *a, int n)
{
int begin = 0;
int end = n - 1;
int temp;
while (begin <= end)
{
temp = a[begin];
a[begin] = a[end];
a[end] = temp;
begin++;
end--;
}
}
