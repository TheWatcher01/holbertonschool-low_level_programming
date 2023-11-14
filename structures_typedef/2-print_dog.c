#include "dog.h"

/**
 * print_dog - Function that prints a struct dog.
 *
 * @d: A pointer to a struct dog.
 *
 * Description: If d is NULL, the function does nothing. If an element of d is
 * NULL, the function prints (nil) instead of this element. Otherwise, the
 * function prints the name, age, and owner of the dog in the format:
 * Name: dog's name
 * Age: dog's age
 * Owner: dog's owner
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
