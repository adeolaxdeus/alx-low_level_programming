#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes a node at index index of a listint_t list
 * @head: Double pointer to listint_t list
 * @index: index to delete node
 *
 * Return: 1 on success otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	/* transverse list to a node before index */
	current = *head;
	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}
	/* check if index is out of bound */
	if (current == NULL || current->next == NULL)
		return (-1);
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
