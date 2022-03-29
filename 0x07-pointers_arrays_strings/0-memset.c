#include "main.h"
/**
*_memset - A function that fills memory with a constant byte.
*@s: first aguent
*@b: second arguemant holds th byte that will be used
*@n: Number of times the byte will be written
*Return: returns the pointer to s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
for (; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
