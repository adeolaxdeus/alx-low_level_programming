#include "lists.h"
#include <stdlib.h>
/**
	* add_nodeint - Adds a new node at the very beginning of a listint_t list
	* @head: Pointer to the head of the list
	* @n: Number to be assign to node element
	*
	* Return: Pointer to new node or NULL if it fails
	*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
