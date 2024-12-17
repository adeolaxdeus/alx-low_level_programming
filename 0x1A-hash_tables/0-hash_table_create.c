#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - Creates a hash table
 * @size: Size of the array
 *
 * Return: Pointer to hash_table on success otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i = 0;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_table_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	while (i < size)
	{
		hash_table->array[i] = NULL;
		i++;
	}
	return (hash_table);
}
