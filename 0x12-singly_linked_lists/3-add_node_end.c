#include "lists.h"

/**
 *add_node_end - Adds a new node at the end of a list_t list.
 *@head:adress to the first element
 *@str: string to b used
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp;
int ccount = 0;
new = malloc(sizeof(list_t));
if (new == NULL)
	return (NULL);
for (; str[ccount]; ccount++)
	;
new->len = ccount;
new->str = strdup(str);
new->next = NULL;
if (*head == NULL)
	*head = new;
else
{
temp = *head;
for (; temp->next != NULL;)
{
temp = temp->next;
}
temp->next = new;
}
return (*head);
}
