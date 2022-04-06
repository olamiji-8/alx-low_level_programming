#include <stdio.h>
#include <stdlib.h>
/**
*main - prints all arguments it receives.
*@c: counter
*@v: vector
*Return: returns all arguements
*/

int main(int c, char *v[])
{
if (c == 3)
{
printf("%i\n", atoi(v[1]) * atoi(v[2]));
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
