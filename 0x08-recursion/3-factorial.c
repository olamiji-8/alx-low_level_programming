#include "main.h"
/**
*factorial - A function that returns the factorial of a num
*@n: integer
*Return: returns the factorial of an int
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
