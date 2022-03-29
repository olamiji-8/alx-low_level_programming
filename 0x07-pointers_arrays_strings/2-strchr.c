#include "main.h"
/**
*_strchr - A function that locates a character in a string.
*@s: first arguement
*@c: second arguement
*Return: Returns a pointer to the first occurrence of the character
*/
char *_strchr(char *s, char c)
{
int i = 0;
char *p;
p = '\0';
while (s[i] != '=')
{
if (s[i] == c)
{
p = &s[i];
break;
}
i++;
}
return (p);
}
