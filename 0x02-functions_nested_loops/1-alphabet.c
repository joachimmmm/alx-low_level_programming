#include <stdio.h>
#include <ctype.h>
#include "main2.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(tolower(alphabet));
	}
	putchar('\n');
	return;
}
