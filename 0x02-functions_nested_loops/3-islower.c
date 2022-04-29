#include <stdio.h>
/**
*_islower - entry point
*
*Return: returns 0 or 1
*@c: argument parsed to the function
*/
int _islower(int c)
{
int a;
if (c >= 97 && c <= 122)
{
a = 1;
}
else if (c >= 65 && c <= 90)
{
a = 0;
}
else
{
a = 0;
}
return (a);
}
