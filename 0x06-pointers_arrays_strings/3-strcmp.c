#include "main.h"
/**
*_strcmp - A function that compares two strings
*Return: return the value
*@s1: First string
*@s2: Second string
*/
int _strcmp(char *s1, char *s2)
{
int f, i;
f = 0;
i = 0;
for ( ; (s1[i] != '\0') && (s2[i] != '\0'); i++)
{
if (s1[i] != s2[i])
{
f = s1[i] - s2[i];
break;
}
}
return (f);
}
