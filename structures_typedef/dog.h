#ifndef DOG_H
#define DOG_H
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct dog - Define a new type struct dog representing a dog.
 *
 * @name: A pointer to a character string representing the dog's name.
 * @age: A float representing the dog's age.
 * @owner: A pointer to a character string representing the dog's owner.
 *
 * Description: This structure represents a dog with its name, age, and owner.
 * Each member is described as follows:
 * - name: This should point to a string which is the name of the dog.
 * - age: This should be a float value representing the age of the dog.
 * - owner: This should point to a string which is the name of the dog's owner.
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

dog_t *new_dog(char *name, float age, char *owner);


#endif
