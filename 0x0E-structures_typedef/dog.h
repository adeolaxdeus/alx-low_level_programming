#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define a new type with the following elements
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
