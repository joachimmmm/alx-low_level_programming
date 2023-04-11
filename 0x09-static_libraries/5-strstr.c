#include <stdio.h>
#include "main.h"

/**
 * _strstr - displays the substring
 * @needle: the substring to be found
 * @haystack: the string
 * Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = needle;
		char *b = haystack;

		while (*a == *b && *a != '\0')
		{
			a++;
			b++;
		}
		if (*a == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
