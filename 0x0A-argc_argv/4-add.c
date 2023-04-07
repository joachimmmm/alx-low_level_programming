#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: arg counter
 * @argv: arg vector in cl
 * Return: 0 or 1 depending on condition
 */
int main(int argc, char *argv[])
{
	int i;
	int nsum = 0;
	unsigned int ch;
	char *ag;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			ag = argv[i];
			for (ch = 0; ch < strlen(ag); ch++)
			{
				if (ag[ch] < 48 || ag[ch] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			nsum += atoi(ag);
			nsum++;
		}
		printf("%d\n", nsum);
	}
	else
		{
			printf("0\n");
		}
	return (0);
}
