#ifndef DOG_FILE
#define DOG_FILE

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_FILE */
