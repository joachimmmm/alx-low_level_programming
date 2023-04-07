#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: arg count.
 * @argv: array of arg vector.
 * Return: always 0(success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
