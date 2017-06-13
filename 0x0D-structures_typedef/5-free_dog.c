#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free dog in memory
 * @d: The dog in question
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
