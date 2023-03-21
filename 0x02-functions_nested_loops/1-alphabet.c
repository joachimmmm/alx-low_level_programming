#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_alphabet - function
 * main - Entry point
 * Return: Always 0(success)
 */

void print_alphabet(void)
{
	int a;

	for (a = 'A'; a <= 'z'; a++)
	{
		putchar(tolower(a));
	}
	putchar('\n');
}

