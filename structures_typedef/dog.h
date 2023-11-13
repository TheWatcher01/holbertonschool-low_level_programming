#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Define a new type struct dog.
 *
 * @name: Pointer of characters name.
 * @age: Float of age.
 * @owner: Pointer of characters owner.
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} Dog;

#endif
