#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes the var of type struct dog
 * @d: dog detail
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 * Return: always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
