#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - Print the elements of a list_tlist.
 * @h: Head node.
 *
 * Return: Number of node.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t node_count = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", temp->len, temp->str);
		node_count++;
		temp = temp->next;
	}
	return (node_count);
}
