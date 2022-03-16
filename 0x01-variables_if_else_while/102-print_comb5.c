#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - entry point
*
*Return: 0 if no error found
*/
int main(void)
{
int num1;
int num2;
int checker;
num1 = 0;
while (num1 <= 99)
{
num2 = num1 + 1;
while (num2 <= 99)
{
checker = !(num1 == 98 && num2 == 99);
putchar(48 + num1 / 10);
putchar(48 + num1 % 10);
putchar(' ');
putchar(48 + num2 / 10);
putchar(48 + num2 % 10);
if (checker)
{
putchar(',');
putchar(' ');
}
num2++;
}
num1++;
}
putchar('\n');
return (0);
}
