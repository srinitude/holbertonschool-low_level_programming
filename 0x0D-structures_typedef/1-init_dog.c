#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog struct
 * @d: The struct in question
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name != NULL)
		d->name = name;
	d->age = age;
	if (owner != NULL)
		d->owner = owner;
}
