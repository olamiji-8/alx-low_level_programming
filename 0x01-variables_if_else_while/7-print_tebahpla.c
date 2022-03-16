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
char alph = 'z';
int num = 0;
while (num < 26)
{
putchar(alph);
alph--;
num++;
}
putchar('\n');
return (0);
}
