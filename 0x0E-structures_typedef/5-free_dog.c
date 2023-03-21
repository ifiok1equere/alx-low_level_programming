#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that fress the dogs.lol.
 * @d: pointer of typre dog_t
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
