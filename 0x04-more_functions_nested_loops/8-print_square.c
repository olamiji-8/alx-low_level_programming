#include "main.h"
/**
*print_square - Write a function that prints a square,
*followed by a new line.
*@size: arguement
*/
void print_square(int size)
{
int num, num1;

num = 0;
num1 = 0;

while (num < size && size > 0)
{
	while (num1 < size)
{
		_putchar('#');
		num1++;
}
	num1 = 0;
	_putchar('\n');
	num++;
}
if (size <= 0)
{
	_putchar('\n');
}
}
