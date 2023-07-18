#include "dog.h"

/**
* init_dog - Entry of function that initializes struct dog
* @d: pointer to struct d
* @name: pointer to character name
* @age: float to variable age
* @owner: pointer to character owner
*
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}