#include "main.h"

/**
*print_line - function for Write a function that draws
*a straight line in the terminal.
*@n: number of '_' to printed
*/

void print_line(int n)
{
int loop = 0;

for (; loop < n; ++loop)
{
	_putchar(95);
}
_putchar('\n');
}
