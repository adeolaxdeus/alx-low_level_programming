#include "lists.h"
#include <stdlib.h>
/**
	* pop_listint - Deletes the head node of a list_t linked list
	* @head: Double pointer to a list_t list
	*
	* Return: The head node's data
	*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
	return (0);
	temp = *head;
	*head = (*head)->next;
	n = (*head)->n;
	free(temp);
	return (n);
}
