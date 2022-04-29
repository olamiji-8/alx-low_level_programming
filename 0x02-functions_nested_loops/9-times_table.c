#include "main.h"
/**
*times_table - function that returns a void value
*Description: print out time table
*/
void times_table(void)
{
int num1, num2, multi, i, range;
i = 1;
range = 10;
num1 = 0;
num2 = 0;
while (i < range + 1)
{
for (num1 = 0; num1 < range; num1++)
{
multi = num1 *num2;
if (multi < 10)
{
_putchar(' ');
_putchar('0' + (multi));
}
else if (multi >= 10)
{
_putchar('0' + (multi) / 10);
_putchar('0' + (multi) % 10);
}
if (num1 < range - 1)
{
_putchar(',');
_putchar(' ');
}
}
num2++;
_putchar('\n');
i++;
}
}
