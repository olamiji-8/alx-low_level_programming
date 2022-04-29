#include "main.h"
/**
*print_sign - entry point
*
*Return: returns 0 or 1
*@n: argument parsed to the function
*/
int print_sign(int n)
{
int a;
if (n > 0)
{
a = 1;
_putchar(43);
}
else if (n == 0)
{
a = 0;
_putchar(48);
}
else
{
a = -1;
_putchar(45);
}
return (a);
}
