#include "dog.h"
#include <stdio.h>

/**
 * free_dog - frees dogs
 * @d: detail
 * Return: always 0
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d);
		free(d->owner);
	}
}
