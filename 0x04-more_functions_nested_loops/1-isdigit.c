#include "main.h"
/**
*_isdigit - returns the value
*@c: argument parsed
*Return: returns a value
*/
int _isdigit(int c)
{
char number;
int r;
r = 0;
number = 48;
for (; number <= 57; ++number)
{
if (c == number)
{
r = 1;
break;
}
}
return (r);
}
