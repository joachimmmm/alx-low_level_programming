#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - prints a chessboard to std output
 * @a: a var
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int y;
	int z;

	for (y = 0; y < 0; y++)
	{
		for (z = 0; z < 0; z++)
		{
			putchar(a[y][z]);
			putchar('\n');
		}
	}
}

