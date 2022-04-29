#include "lists.h"

/**
 *list_len - returns the number of elements in a
 *linked list_t list.
 *@h: head pointer of the nodes
 *Return: return the number of element/node
 */

size_t list_len(const list_t *h)
{
size_t ne = 0;
for (; h != NULL; ++ne)
	h = h->next;
return (ne);
}
