#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 1 to 14
 *
 * Return: always (0)
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
		if (i > 9)
		{
		putchar((i / 10) + '0');
		}
		putchar((i % 10) + '0');
		}
	putchar('\n');
	}
}
