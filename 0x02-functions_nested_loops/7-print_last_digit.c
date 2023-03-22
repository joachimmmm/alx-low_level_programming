#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last dgt
 * @n: The number to be treated
 * Return: value of the last dgt of num
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
