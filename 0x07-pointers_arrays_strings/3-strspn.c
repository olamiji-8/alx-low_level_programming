#include "main.h"
/**
*_strspn - a function that gets the length of a prefix substring.
*@s: First arguement
*@accept: second arguement
*Return: returns the number of time char was found
*/
unsigned int _strspn(char *s, char *accept)
{
int i, a, num, flag;
num = 0;
i = 0;
a = 0;
flag = 0;
while (s[i] != '\0')
{
a = 0;
while (accept[a] != '\0')
{
if (s[i] == accept[a])
{
num++;
flag = 1;
break;
}
else if (s[i] != accept[a])
{
flag = 0;
}
a++;
}
if (flag == 0)
{
break;
}
i++;
}
return (num);
}
