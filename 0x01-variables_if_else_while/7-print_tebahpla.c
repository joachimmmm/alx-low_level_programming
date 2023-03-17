#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
