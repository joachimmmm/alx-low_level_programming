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
	char sch = 'a';

	while (ch <= 'Z')
	{
		putchar(tolower(ch));
		ch++;
	}
	while (sch <= 'z')
	{
		putchar(toupper(sch));
		sch++;
	}
	putchar('\n');
	return (0);
}
