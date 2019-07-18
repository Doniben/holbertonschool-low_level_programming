#include <stdio.h>
#include "dog.h"

/**
 * init_dog - .
 * @d: Dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of the owner of the dog
 *
 * Return: Always 0.
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
