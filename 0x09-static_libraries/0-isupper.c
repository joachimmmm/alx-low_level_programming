#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks of the code is in uppercase
 *@c: the alphabet to be passed
 * Return: 1 if uppercase, 0 if otherwise.
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
