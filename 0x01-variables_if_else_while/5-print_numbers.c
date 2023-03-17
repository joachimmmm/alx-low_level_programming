#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int num = 1;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
