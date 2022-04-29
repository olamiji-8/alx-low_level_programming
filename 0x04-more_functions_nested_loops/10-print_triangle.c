#include "main.h"
/**
*print_triangle - function that prints a triangle,
*followed by a new line.
*@size: Arguement/parmeter
*/
void print_triangle(int size)
{
int loop1, loop2, loop3;
loop1 = 1;
while (loop1 <= size && size > 0)
{
loop2 = 0;
while (loop2 < (size  - loop1))
{
_putchar(' ');
loop2++;
}
loop2 = 0;
loop3 = 0;
while (loop3 < loop1)
{
_putchar('#');
loop3++;
}
_putchar('\n');
loop3 = 0;
loop1++;
}
if (size <= 0)
{
_putchar('\n');
}
}
