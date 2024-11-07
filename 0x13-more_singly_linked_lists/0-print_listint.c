#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_listint - Prints all elements of a listint_t list
 * @h: Pointer to head
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
