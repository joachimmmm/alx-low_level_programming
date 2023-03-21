#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(tolower(alphabet));
	}
	putchar('\n');
	return (0);
}
