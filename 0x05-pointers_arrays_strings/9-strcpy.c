#include <stdio.h>
/**
*_strcpy - Write a function that copies the string pointed to by src,
*including the terminating null byte (\0), to the buffer pointed to by dest.
*@dest: first arguement that is the destination.
*@src: second arguement source.
*Return: return the buffer
*/

char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
