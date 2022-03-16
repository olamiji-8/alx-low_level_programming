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
char c = 'a';
int num = 48;
while (num < 58)
{
putchar(num);
num++;
}
num = 0;
while (num < 6)
{
putchar(c);
c++;
num++;
}
putchar('\n');
return (0);
}
