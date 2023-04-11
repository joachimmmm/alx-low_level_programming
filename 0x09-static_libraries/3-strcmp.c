#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares 2 strings
 * @s1: the first string
 * @s2: the second string
 * Return: if str1 < str2, -ve diff
 * If s1 == s2, 0.
 * if s1 > s2, +ve diff
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

