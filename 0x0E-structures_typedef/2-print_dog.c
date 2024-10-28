#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Print a dog info
 * @d: Pointer to a dog structure
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		printf("NAME: %s\n", d->name);
	else
		printf("NAME: nil)\n");
	if (!(d->age < 0))
		printf("AGE: %f\n", d->age);
	else
		printf("AGE: (nil)\n");
	if (d->owner != NULL)
		printf("OWNER: %s\n", d->owner);
	else
		printf("OWNER: (nil)");
}
