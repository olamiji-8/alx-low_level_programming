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
char alph = '0';
int num = 0;
while (num < 10)
{
putchar(alph);
alph++;
num++;
}
putchar('\n');
return (0);
}
