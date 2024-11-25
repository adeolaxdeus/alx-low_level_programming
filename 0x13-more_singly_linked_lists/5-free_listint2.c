#include <stdlib.h>
#include "lists.h"
/**
	* free_listint2 - Free  a listint_t list
	* @head: Double pointer to listiny_t list
	*
	*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
	temp = *head;
	*head = (*head)->next;
	free(temp);
	}
	*head = NULL;
}
