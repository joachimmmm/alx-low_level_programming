#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints line diagonally
 * @n: the value to be passed.
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < x; y++)
	{
	putchar(32);
	}
	putchar(92);
	putchar('\n');
	}
	}
}
