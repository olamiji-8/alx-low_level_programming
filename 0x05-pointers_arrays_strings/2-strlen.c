#include "main.h"
/**
*_strlen - A function that returns the length of a string.
*Description: a function that return the lenght of a string
*Return: return the value of string lenthg
*@s: Arguement
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
