#include "lists.h"
#include <stdio.h>

/**
*add_node - Adds a new node at the beginning
*of a list_t list.
*@head: pointer to the head of the node
*@str: string
*Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
int ccount;
new = malloc(sizeof(list_t));
if (new == NULL)
	return (NULL);
for (ccount = 0; str[ccount] != '\0'; ccount++)
	;
new->str = strdup(str);
new->len = ccount;
new->next = *head;
*head = new;
return (*head);
}
