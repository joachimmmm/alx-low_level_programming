#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the struct dog.
 * @d: details
 * Return: always 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
