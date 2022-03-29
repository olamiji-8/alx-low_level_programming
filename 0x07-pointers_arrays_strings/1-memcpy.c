#include "main.h"
/**
*_memcpy - A function that copies memory area.
*@dest: destination pointer
*@n: number
*@src: source pointer
*Return: returns the value of pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
