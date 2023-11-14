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
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
