#include <stdio.h>
#include <stdlib.h>

/**
 * main - my entry point
 * @argc: arg count in cl
 * @argv: arg vector in cl
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int firstnum = 0;
	int secondnum = 0;

	if (argc == 3)
	{
		firstnum = atoi(argv[1]);
		secondnum = atoi(argv[2]);
		printf("%d\n", firstnum * secondnum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
