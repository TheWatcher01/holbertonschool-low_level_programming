#include "dog.h"

/**
 * free_dog - Function that frees dog.
 * @d: Pointer of (d) structure
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
