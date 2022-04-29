#include "main.h"
/**
*cap_string - A  function that capitalizes all words of a string.
*@s: arguement
*Return: returns the value string
*/
char *cap_string(char *s)
{
int i, sp;
char sep[] = {' ', '\t', '\n', ',', ';', '.', '!',
'?', '"', '(', ')', '{', '}' };
i = 0;
sp = 0;
if (s[i] >= 97 && s[i] <= 122)
{
s[i] = s[i] - 32;
}
while (s[i] != '\0')
{
sp = 0;
while (sp < 13)
{
if (s[i] == sep[sp])
{
if (s[i + 1] >= 97 && s[i + 1] <= 122)
{
s[i + 1] = s[i + 1] - 32;
break;
}
}
sp++;
}
i++;
}
return (s);
}
