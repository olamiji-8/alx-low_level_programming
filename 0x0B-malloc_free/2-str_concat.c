#include <stdlib.h>
#include "main.h"

/**
 *_sl - returns str lenght
 *@s: arguement.
 *Return: returns str lenght
*/

int _sl(char *s)
{
int l = 0;
if (s == NULL)
	l = 1;
while (s[l] != '\0')
{
l++;
}
return (l + 1);
}

/**
*str_concat - point to cncatenation str
*@s1: arguement.
*@s2: arguement2.
*Return: returns the concatenation
*/

char *str_concat(char *s1, char *s2)
{
int i = 0;
int n = 0;
char *cstr = malloc(sizeof(char) * 20);
if (cstr == NULL)
	return (NULL);
if (s1 != NULL)
{
while (s1[i] != '\0')
{
cstr[i] = s1[i];
i++;
}
}
if (s2 != NULL)
{
while (s2[n] != '\0')
{
cstr[i] = s2[n];
i++;
n++;
}
}
if (!(s1 == NULL || s2 == NULL))
{
return (cstr);
}
return (0);
}
