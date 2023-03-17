#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'A';

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(tolower(ch));
		putchar(toupper(ch));
	}
	putchar('\n');
	return (0);
}
