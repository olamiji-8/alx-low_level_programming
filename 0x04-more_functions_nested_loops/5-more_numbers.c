#include "main.h"
/**
*more_numbers - print number from (0-9)
*/
void more_numbers(void)
{
int loop1, loop2, num;
loop1 = 1;
loop2 = 1;
while (loop1 <= 10)
{
	num = 48;
	while (loop2 <= 15)
{
		if (loop2 == 11)
{
			num = 48;
}
		if (loop2 > 10)
{
			_putchar(49);
}
		_putchar(num);
		++loop2;
		num++;
}
	loop2 = 1;
	_putchar('\n');
	loop1++;
}
}
