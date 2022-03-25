#include "main.h"
/**
*_strncpy - A function that copies a string
*Return: returns the pointer the new string
*@dest: arguement of the string that will be formed
*@src: Arguement contaiing the astring that will be copied fron
*@n: How much string will be copied
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
