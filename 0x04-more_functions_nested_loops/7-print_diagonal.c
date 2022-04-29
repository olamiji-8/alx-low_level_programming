#include "main.h"

/**
*print_diagonal - print aout \\  diagonally
*@n: arguement
*/

void print_diagonal(int n)
{

int loop1, loop2;

loop1 = 0;

while (loop1 < n && n > 0)
{
while (loop2 < loop1)
{
_putchar(' ');
loop2++;
}
loop2 = 0;
_putchar(92);
_putchar('\n');
loop1++;
}
if (n <= 0)
_putchar('\n');
}
