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
		if (d.name == NULL)
		{
			printf("Name: (nil)");
			printf("Age: %d", d.age);
			printf("Owner: %s", d.owner);
		}
		else if (d.age == NULL)
		{
			printf("Name: %s", d.name);
			printf("Age: (nil)");
			printf("Owner: %s", d.owner);
		}
		else if (d.owner == NULL)
		{
			printf("Name: %s", d.name);
			printf("Age: %d", d.age);
			printf("Owner: (nil)");
		}
		else
		{
			printf("Name: %s", d.name);
			printf("age: %d", d.name);
			printf("Owner: %s", d.owner);
		}
	}
}
