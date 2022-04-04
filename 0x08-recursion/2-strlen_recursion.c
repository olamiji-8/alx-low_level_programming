#include "main.h"
/**
*_strlen_recursion - A function that returns the length of a string.
*@s: Arguement
*Return: returns the lenght of the string
*/
int _strlen_recursion(char *s)
{
if (*s)
{
int n = 1;
return (n + _strlen_recursion(s + 1));
}
return (0);
}
