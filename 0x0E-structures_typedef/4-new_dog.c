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
	if (dog_t != NULL)
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
		return (new_dog);
	}
	else
	{
		return (NULL);
	}
}
