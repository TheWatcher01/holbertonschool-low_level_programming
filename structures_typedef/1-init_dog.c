#include "dog.h"

/**
 * init_dog - Initialize a variable fo type struct dog.
 * @d: Pointer to the struct dog to initialize.
 * @name: Name to set.
 * @age: Age to set.
 * @owner: Owner to set.
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
