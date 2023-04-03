#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a str
 * @s: the string to be checked
 * @c: the char to be checked.
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == c)
		{
			return (s + count);
		}
	}
	return (NULL);
}
