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
int looper = 0;
while (looper < 45)
{
while (num2 < 58)
{
putchar(num1);
putchar(num2);
if (looper != 44)
{
putchar(',');
putchar(' ');
}
num2++;
looper++;
}
num2 = num1 + 1;
num1++;
num2++;
}
putchar('\n');
return (0);
}
