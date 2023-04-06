#include "main.h"
#include <stdio.h>

/**
 * factorial - gives the factorial of given num
 * @n: given num
 * Return: -1 if n < 0
 */

int factorial(int n)
{
	if (n <= 1)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));

}
