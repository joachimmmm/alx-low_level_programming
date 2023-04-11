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
	int ind1;
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
	for (ind1 = 0; ind1 < a; ind1++)
	{
		newstr[ind1] = s1[ind1];
	}
	for (ind1 = 0; ind1 < b; ind1++)
	{
		newstr[ind1] = s2[ind1];
	}
	newstr[c] = '\0';
	return (newstr);
}
