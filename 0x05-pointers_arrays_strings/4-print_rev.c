#include "main.h"
/**
*print_rev - A function that returns the length of a string.
*Description: a function that return the lenght of a string
*Return: returns the reverse
*@s: Arguement
*/
void print_rev(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
length -= 1;
for (; length >= 0; length--)
{
_putchar(s[length]);
}
_putchar('\n');
}
