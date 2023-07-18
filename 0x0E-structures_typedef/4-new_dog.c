#include "dog.h"

/**
* new_dog - function that creates a new dog
* @name: pointer to a character variable name
* @age: float variable age
* @owner: pointer to a character variable owner
*
* Return: new dog otherwise null
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *n_dog;

	n_dog = malloc(sizeof(struct dog_t));
	if (n_dog != NULL)
	{
		n_dog->name = name;
		n_dog->age = age;
		n_dog->owner = owner;
		return (n_dog);
	}
	else
	{
		return (NULL);
	}
}
