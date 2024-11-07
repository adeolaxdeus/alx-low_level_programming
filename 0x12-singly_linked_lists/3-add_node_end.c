#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - Add a new node at the of a list_t list
 * @head: Pointer to head of singly linked list
 * @str: String to be store in each node
 *
 * Return: Pointer to new element or NULL if it fails
 */
list_t *add_node_end(list_t **head, char *str)
{
	list_t *new, *temp;

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
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next  = new;
	return (new);
}
