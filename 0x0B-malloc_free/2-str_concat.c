#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - func that concatenates
 * @s1: 1st str
 * @s2: 2nd str
 * Return: return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i1 = 0;
	int i2 = 0;
	char *newstr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a] != '\0')
	{
		s1++;
	}
	while (s2[b] != '\0')
	{
		s2++;
	}
	c = a + b;
	newstr = malloc((sizeof(char) * c) + 1);

	if (newstr == NULL)
	{
		return (NULL);
	}
	for (i1 = 0; s1[i1] != '\0'; i1++)
	{
		newstr[i1] = s1[i1];
	}
	for (i2 = 0; s2[i2] != '\0'; i2++)
	{
		newstr[i1 + i2] = s2[i2];
	}
	newstr[c] = '\0';
	return (newstr);
}
