#include <stdio.h>
#include "main.h"
/**
* main - entry point
* @n: integer
* return: 0 on success
**/
int main(void)
{
int n;

for (n = 1; n <= 100; n++)
{
if ((n % 3) == 0 && (n % 5) == 0)
{
printf("FizzBuzz");
}
else
if ((n % 3) == 0) 
{
printf("Fizz");
}
else
if ((n % 5) == 0)
{
printf("Buzz");
}
else
printf("%i ", n);
}
printf(" ");
printf("\n");
return (0);
}
