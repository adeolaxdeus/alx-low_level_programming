#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - Return the number of elements in a linked listint_t
 * @h: Pointer to head
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
