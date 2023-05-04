#include "main.h"

/**
 * print_binary - prints the binary rep of num
 * @n: num to be represented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int t;
	int index;
	int num_count = 0;

	for (index = 63; index >= 0; index--)
	{
		t = n >> index;
		if (t & 1)
		{
			_putchar('1');
			num_count++;
		}
		else if (t)
		{
			_putchar('0');
		}
	}
	if (!t)
	{
		_putchar('0');
	}
}
