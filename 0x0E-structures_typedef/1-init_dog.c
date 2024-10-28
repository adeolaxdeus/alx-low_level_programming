#include "dog.h"
/**
 * init_dog - initialize a dog structure
 * @d: Pointer to a dog structure
 * @name: Pointer to dog name
 * @age: Age of dog
 * @owner: Pointer to dog's owner name
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
