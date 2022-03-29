#include "main.h"
/**
*_strpbrk - A function that searches a string for any of a set of bytes.
*@s: first arguement
*@accept: second arguement
*Return: returns the pointer to the byte in s
*/
char *_strpbrk(char *s, char *accept)
{
int i, a;
char *p;
p = '\0';
i = 0;
a = 0;
while (s[i] != '\0')
{
a = 0;
while (accept[a] != '\0')
{
if (s[i] == accept[a])
{
p = &s[i];
break;
}
a++;
}
if (s[i] == accept[a])
{
break;
}
i++;
}
return (p);
}
