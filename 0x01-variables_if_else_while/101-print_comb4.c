#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - entry point
*
*Return: 0
*/
int main(void)
{
int num1 = 48;
int num2 = 49;
int num3 = 50;
while (num1 < 56)
{
while (num3 < 58)
{
putchar(num1);
putchar(num2);
putchar(num3);
if (num1 != 55)
{
putchar(',');
putchar(' ');
}
num3++;
}
if (num2 == 56)
{
num2 = num1 + 1;
num1++;
}
num2++;
num3 = num2 + 1;
}
putchar('\n');
return (0);
}
