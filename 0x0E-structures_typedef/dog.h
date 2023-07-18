#ifndef DOG_FILE
#define DOG_FILE

#include <stdlib.h>
#include <stdio.h>

/**
* struct dog - Structure of a dog
* @name: character variable name
* @age: float variable age
* @owner: character variable owner
*
* Description: A structure of a dog with name, age and owner variables
*/

struct dog
{
	char *name;
	float *age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_FILE */
