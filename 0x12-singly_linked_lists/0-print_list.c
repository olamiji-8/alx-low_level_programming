#include "lists.h"
#include <stdio.h>

/**
*print_list - print all the element of a list.
*@h: head of the node
*Return: the number of nodes.
*/

size_t print_list(const list_t *h)
{
int i = 0;

while (h != NULL)
{
if (h->str == NULL)
{
	printf("[0] (nil)\n");
}
else
{
		printf("[%i] %s\n", h->len, h->str);
}
		h = h->next;
		i++;
}
return (i);
}
