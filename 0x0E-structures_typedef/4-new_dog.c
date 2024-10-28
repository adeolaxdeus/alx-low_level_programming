#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - Creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner name
 *
 * Return: Pointer to a newly allocated memory of type dog_t on success or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr;

	dog_ptr = malloc(sizeof(dog_t));
	if (dog_ptr == NULL)
		return (NULL);
	dog_ptr->name = malloc(sizeof(name) + 1);
	if (dog_ptr->name == NULL)
	{
		free(dog_ptr->name);
		dog->name = NULL;
		free(dog_ptr);
		dog_ptr = NULL;
		return (NULL);
	}
	strcpy(dog_ptr->name, name);
	dog_ptr->age = age;
	dog_ptr->owner = malloc(sizeof(owner) + 1);
	if (dog_ptr->owner == NULL)
	{
		free(dog_ptr->owner);
		dog_ptr->owner = NULL;
		free(dog_ptr);
		dog_ptr = NULL;
		return (NULL);
	}
	strcpy(dog_ptr->owner, owner);
	return (dog_ptr);
}
