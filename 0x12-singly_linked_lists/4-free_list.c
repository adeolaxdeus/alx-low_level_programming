#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Frees a list_t list
 * @head: Pointer to the first node of a list_t list
 *
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		if (temp->str != NULL)
		{
			free(temp->str);
			temp->str = NULL;
		}
		free(temp);
		temp = NULL;
	}
}
