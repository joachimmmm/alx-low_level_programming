#include <stdio.h>
#include "main.h"

int prime_checker(int num, int i);
/**
 * is_prime_number - returns 1 if prime num
 * @n: num to be checked
 * Return: 1 if prime num.
 */

int is_prime_number(int n)
{
	return (prime_checker(n, 1));
}

/**
 * prime_checker - checks for prime num
 * @num: the num
 * @j: iterate
 * Return: 1 or 0
 */
int prime_checker(int num, int j)
{
	if (num % j == 0 && j > 1)
	{
		return (0);
	}
	if (num <= 1)
	{
		return (0);
	}
	if ((num / j) < j)
	{
		return (1);
	}
	return (prime_checker(num, j + 1));
}
