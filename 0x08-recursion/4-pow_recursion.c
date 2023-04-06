#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns val of x^y
 * @x: base num
 * @y: power num.
 * Return: val of x^y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}

