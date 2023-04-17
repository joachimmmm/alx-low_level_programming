#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * __strcpy - cp the str
 * @src: source of str
 * @dest: where str will be cped to
 * Return: ptr to dest
 */
char *__strcpy(char *dest, char *src)
{
	int length, a;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}
	for (a = 0; a < length; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
/**
 * __strlen - returns str val
 * @str: string
 * Return: strlength
 */
int __strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * new_dog - new dog creator
 * @name: name of new dog.
 * @age: age of new dog.
 * @owner: owner of new dog.
 * Return: ptr to new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = __strlen(name);
	length2 = __strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc((length1 + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc((length2 + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	__strcpy(dog->name, name);
	__strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
