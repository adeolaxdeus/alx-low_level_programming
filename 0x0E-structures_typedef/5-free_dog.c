#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Free a previously allocated memory of dog_t type
 * @d: Pointer to a dog_t structure
 *
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
	{
		free(d->name);
		d->name = NULL;
	}
	if (d->owner != NULL)
	{
		free(d->owner);
		d->owner = NULL;
	}
	free(d);
	d = NULL;
}
