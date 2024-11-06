#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: Pointer to the first node of the list
 * @str: String to be stored in each node
 *
 * Return: Address of new element or NULL if it fail
 */
list_t *add_node(list_t **head, char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
