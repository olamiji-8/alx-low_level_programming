#include "main.h"
/**
*_strstr - A function that locates a substring.
*@haystack: First arguement
*@needle: second arguement
*Return: returns the pointer to r
*/
char *_strstr(char *haystack, char *needle)
{
int i, s;
char *r;
s = 0;
i = 0;
r = 0;
while (haystack[i] != '\0')
{
if ((haystack[i] == needle[0]) && (haystack[i] != '\0'))
{
s = 0;
r = &haystack[i];
while (needle[s] != '\0')
{
if (haystack[i + s] != needle[s])
{
r = '\0';
break;
}
s++;
}
}
i++;
}
return (r);
}
