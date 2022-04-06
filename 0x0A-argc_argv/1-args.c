#include <stdio.h>

/**
*main - a program that prints the number of arguments passed into it.
*@argc: arg counter
*@argv: arg vector
*Return: return the count of arg
*/

int main(int argc, char *argv[])
{
if (argv)
{
printf("%i\n", argc - 1);
}
return (0);
}
