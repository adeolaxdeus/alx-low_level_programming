#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * getLen - get length of string
 * @s: string to be count.
 *
 * Return: length of string
 */
int getLen(char *s)
{
	char *ptr = s;
	int len = 0;

	while (*ptr)
	{
		len++;
		ptr++;
	}
	return (len);
}
/**
 * copy - copy string
 * @str: string to be copy.
 *
 * Return: pointer to duplicated string.
 *
 */
char *copy(char *str)
{
	char *ptr, *start;

	ptr = malloc((getLen(str) + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	start = ptr;
	while (*str)
	{
		*ptr = *str;
		ptr++;
		str++;
	}
	*ptr = '\0';
	return (start);
}
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new_dog elements or NULL if the fnction fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
		return (NULL);
	}
	doggy->name = copy(name);
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	doggy->owner = copy(owner);
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	doggy->age = age;
	return (doggy);
}
