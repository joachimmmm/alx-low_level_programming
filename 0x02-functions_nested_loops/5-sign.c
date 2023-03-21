#include "main.h"
#include <stdio.h>

/**
 * print_sign - Prints the sign
 * @n: The number to be checked
 * Return: 1 for +num, -1 for -num and 0 for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
