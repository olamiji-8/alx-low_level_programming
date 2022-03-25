#include "main.h"
/**
*_strcat - A function that concatenates two strings.
*Return: This returns the consatenates string
*@dest: first arguement
*@src: second arguement
*/
char *_strcat(char *dest, char *src)
{
int i, f;
f = 0;
i = 0;
do {
i++;
} while (dest[i] != '\0');

while (src[f] != '\0')
{
dest[i] = src[f];
f++;
i++;
}
return (dest);
}
