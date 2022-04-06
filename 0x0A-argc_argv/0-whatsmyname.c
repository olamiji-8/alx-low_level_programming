#include <stdio.h>

/**
*main - main entry
*@argc: argument counter
*@argv: arguement vector
*Return: returns the name of program
*/

int main(int argc, char *argv[])
{
if (argc >= 1)
{
printf("%s\n", argv[0]);
}
return (0);
}
