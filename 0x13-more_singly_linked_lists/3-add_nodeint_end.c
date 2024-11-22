#include "lists.h"
#include <stdlib.h>
/**
	* add_nodeint_end - Adds a new node at the end of a listint_t list
	* @head: Pointer to head of list listint_t
	* @n: Number to be assign to the element of the new node
	*
	* Return: Pointer to new node or NULL if it fails
	*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
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
	temp->next = new;
	return (new);
}
