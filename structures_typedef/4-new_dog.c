#include "dog.h"

/**
 * dog_t *new_dog - Function that creates a new dog.
 *
 * @*name: Pointer to string characters (name)
 * @age: Float number (age)
 * @*owner: Pointer to string characters (owner)
 *
 * Return: NULL if the function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->name = malloc(strlen(name) + 1);

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	strcpy(newDog->name, name);

	newDog->age = age;

	newDog->owner = malloc(strlen(owner) + 1);

	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	strcpy(newDog->owner, owner);

	return (newDog);
}
