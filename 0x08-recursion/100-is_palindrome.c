#include "main.h"

/**
*_strlen - findthe lenght of the string
*@s: string
*Return: return the sring lenght
*/

int _strlen(char *s)
{
if (!(*s))
{
return (0);
}
return (1 + _strlen(s + 1));
}

/**
* _palindrome - findthe lenght of the string
*@s: string
*@num: lenght of string
*@index: 0
*Return: check if the sring is palendrom
*/

int _palindrome(char *s, int num, int index)
{
int n1 = num / 2;
if (s[index] != s[num])
{
return (0);
}
if (n1 == num)
{
if (s[index] == s[num])
{
return (1);
}
}
return (_palindrome(s, num - 1, index + 1));
}

/**
*is_palindrome - findthe lenght of the string
*@s: string
*Return: check if the sring is palendrom
*/

int is_palindrome(char *s)
{
int index = 0;
int num = _strlen(s);
num = num - 1;
if (*s == ' ')
{
return (1);
}
return (_palindrome(s, num, index));
}
