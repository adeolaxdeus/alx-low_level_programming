#include "lists.h"
#include <stdlib.h>
/**
	* free_listint - Frees a listint_t list
	* @head: Pointer to head of list
	*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}
