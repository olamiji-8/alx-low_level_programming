#include "lists.h"
/**
 * free_list - Frees a list of nodes
 * @head: pointer to the first element of the list
 */

void free_list(list_t *head)
{
list_t *temp;
if (head == NULL)
	return;
for (; head != NULL ;)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
