#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * @str: the str to be changed
 * Return: a ptr to changed str
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);
}
