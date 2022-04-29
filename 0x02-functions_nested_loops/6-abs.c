#include <stdio.h>
/**
*_abs - returns the absolut of an integer
*@n: argument
*Return: returns the absolute
*/
int _abs(int n)
{
int abs;
if (n > 0)
{
abs = n;
}
else
{
abs = n * -1;
}
return (abs);
}
