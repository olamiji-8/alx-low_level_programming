#include <stdlib.h>
#include "main.h"

/**
 *create_array - writes a function that creates an array,
 *and initializes it with a specific char
 * @size: The size to allocate
 *@c: character
 *Return: returns a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *arr = malloc(sizeof(c) * size);
if (arr != NULL && size != 0)
{
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
if ((arr == NULL) || (size == 0))
{
	return (NULL);
}
return (0);
}
