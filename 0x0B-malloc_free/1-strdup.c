#include <stdlib.h>
#include "main.h"

/**
 *_strdup - returns pointer to duplicate.
 *@str: argument.
 *Return: returns the pointer to duplicate.
 */

char *_strdup(char *str)
{
int i = 0;
int len = 0;
char *nstr;
if (!str || str == NULL)
	return (NULL);
while (str[i] != '\0')
{
len++;
i++;
}
i = 0;
nstr = malloc(sizeof(char) * (len + 1));
if (nstr)
{
while (str[i] != '\0')
{
	nstr[i] = str[i];
	i++;
}
return (nstr);
}
return (0);
}
