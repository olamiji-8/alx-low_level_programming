#include "main.h"

/**
*_sqrt - calculates the sqrt
*@n: arguement
*@con: second arguement
*Return: return the sqr of n
*/

int _sqrt(int n, int con)
{
if ((con * con) == n)
{
return (con);
}
if ((con * con) > n)
{
return (-1);
}
return (_sqrt(n, con + 1));
}

/**
*_sqrt_recursion - returns the natural square root of a number
*@n: arguement
*Return: return the sqr of n
*/

int _sqrt_recursion(int n)
{
int con = 0;
if (n < 0)
{
return (-1);
}

return (_sqrt(n, con));
}
