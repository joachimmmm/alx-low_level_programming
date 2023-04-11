#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the str
 * @accept: the str to be matched
 * Return: the num of bytes in initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int letter;

	while (*s)
	{
	for (letter = 0; accept[letter]; letter++)
	{
		if (*s == accept[letter])
		{
			num++;
			break;
		}
		else if (accept[letter + 1] == '\0')
		{
			return (num);
		}
	}
	s++;
	}
	return (num);
}
