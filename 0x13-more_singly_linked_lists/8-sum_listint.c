#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - Sum the  data of all listint_t linked list
 * @head: Pointer to listint_t list
 *
 * Return: Sum of data or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == 0)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
