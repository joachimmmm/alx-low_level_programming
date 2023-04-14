#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two string
 * @s1: first string
 * @s2: second string
 * @n: size of str
 * Return: the concatenated strs
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int q = 0, w = 0, e = 0, r = 0, t = 0;
	char *newstring;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[q] != '\0')
		q++;
	while (s2[w] != '\0')
		w++;
	if (n >= w)
	{
		e = q + w;
	}
	else
	{
		e = q + n;
	}
	newstring = malloc((sizeof(char) * e) + 1);
	if (newstring == NULL)
	{
		return (NULL);
	}
	while (s1[r] != '\0')
	{
		newstring[r] = s1[r];
		r++;
	}
	while (s2[t] != '\0')
	{
		newstring[r] = s2[t];
		r++;
		t++;
	}
	newstring[r] = '\0';
	return (newstring);
}
