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
	int data;

	if (head == NULL || *head == NULL)
	{
	return (0);
	}
	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
