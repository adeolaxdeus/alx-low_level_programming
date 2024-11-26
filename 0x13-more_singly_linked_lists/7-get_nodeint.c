#include <stdlib.h>
#include "lists.h"
/**
	* get_nodeint_at_index -  Returns nth node of a listint_t list
	* @head: Pointer to listint_t list
	* @index: Position of node to be return
	*
	* Return: nth node or NULL if node not found, head is null
	*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
