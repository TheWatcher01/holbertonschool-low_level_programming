#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: A pointer to the struct dog to initialize.
 * @name: A pointer to a character string representing the dog's name.
 * @age: A float representing the dog's age.
 * @owner: A pointer to a character string representing the dog's owner.
 * 
 * Return: void
 *
 * Description: This function initializes a variable of type struct dog with
 * the given name, age, and owner. The initialized variable will have its
 * members set to the values provided. If the provided pointer to the struct
 * dog is NULL, the function will return without doing anything.
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
