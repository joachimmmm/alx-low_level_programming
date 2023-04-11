#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns ptr to new alloc space in mem
 * @str: a str
 * Return: NULL if str == NULL
 */
char *_strdup(char *str)
{
	int index;
	int strlength = 0;
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[strlength] != '\0')
	{
		strlength++;
	}
	newstr = malloc((sizeof(char) * strlength) + 1);
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < strlength; index++)
	{
		newstr[index] = str[index];
	}
	newstr[index] = '\0';
	return (newstr);
}
