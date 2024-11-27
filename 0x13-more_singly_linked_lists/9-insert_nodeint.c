#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Insert a new node at a given index
 * @head: Double pointer  to listint_t list
 * @idx: Index  position to insert new node
 * @n: Data of new node
 *
 * Return: Pointer to new node on success otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current;
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	/* transverse list to the point before index */
	current = *head;
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	/* check if index out of range */
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/*  insert new node at the index */
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
