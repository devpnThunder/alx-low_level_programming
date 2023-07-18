#include "dog.h"

/**
* print_dog - funstion that prints struct dog
* @d: pointer to struct dog
*
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
		else if (d->age == NULL)
		{
			printf("Name: %s\n", d->name);
			printf("Age: (nil)\n");
			printf("Owner: %s\n", d->owner);
		}
		else if (d->owner == NULL)
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
			printf("age: %f", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
}
