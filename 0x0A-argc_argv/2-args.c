#include <stdio.h>

/**
*main - prints all arguments it receives.
*@c: counter
*@v: vector
*Return: returns all arguements
*/

int main(int c, char *v[])
{
int count = 0;

while (count < c)
{
printf("%s", v[count]);
count++;
if (count != c)
{
putchar('\n');
}
}
putchar('\n');
return (0);
}
