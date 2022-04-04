#include "main.h"
/**
*_puts_recursion - A function that printd a string,
*followed by a new line
*@s: first arguement
*/
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
if (!(*s))
{
_putchar('\n');
}
}
