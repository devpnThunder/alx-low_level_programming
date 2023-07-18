#ifndef DOG_FILE
#define DOG_FILE

#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - structure of a dog
* @name: pointer to a character variable name
* @age: float variable age
* @owner: pointer to a character variable owner
*
* Description: A structure of a dog with variable name, age and owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif /* DOG_FILE */
