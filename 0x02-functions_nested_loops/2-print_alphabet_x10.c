#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0(success)
 */

void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
	putchar('\n');
	}
}
