#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints dog info if ptr is not null
 * @d: The dog in question
 *
 */

void print_dog(struct dog *d)
{
	char *name, *owner, *empty = "(nil)";

	if (d == NULL)
		return;
	if (d->name == NULL)
		name = empty;
	else
		name = d->name;
	if (d->owner == NULL)
		owner = empty;
	else
		owner = d->owner;
	printf("Name: %s\n", name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", owner);
}
