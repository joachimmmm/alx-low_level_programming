#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches for a string
 * @s: the string
 * @accept: the str characters to be matched
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int count, num;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (num = 0; accept[num] != '\0'; num++)
		{
			if (s[count] == accept[num])
			{
				return (s + count);
			}
		}
	}
	return (NULL);
}
