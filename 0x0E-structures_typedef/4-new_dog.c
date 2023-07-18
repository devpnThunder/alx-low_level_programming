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
	dog_t *a_dog;

	a_dog = malloc(sizeof(dog_t));
	if (a_dog == NULL)
		return (NULL);
	a_dog->name = name;
	a_dog->age = age;
	a_dog->owner = owner;
	return ((a_dog[name][owner]);
}
