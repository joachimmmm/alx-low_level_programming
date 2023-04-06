#include "main.h"
#include <stdio.h>

int numroot(int num, int a);
/**
 * _sqrt_recursion - sqrt recursion
 * @n: num to be checked
 * Return: -1 if no natural root found
 */

int _sqrt_recursion(int n)
{
	return (numroot(n, 1));
}

/**
 * numroot - finds sq root
 * @num: num of root
 * @a: iteration
 * Return: root
 */
int numroot(int num, int a)
{
	int sqroot = a * a;

	if (sqroot == num)
	{
		return (a);
	}
	if (sqroot > num)
	{
		return (-1);
	}
	return (numroot(num, a + 1));
}
